class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {
        vector<int> lftsum,rgtsum;
        lftsum.push_back(0);
        rgtsum.push_back(0);
        int lft=0,rgt=0,ans=0;
        for(int i=0;i<k;i++){
            lft=lftsum[i]+cardpoints[i];
            rgt=rgtsum[i]+cardpoints[cardpoints.size()-1-i];
            lftsum.push_back(lft);
            rgtsum.push_back(rgt);
        }
        for(int i=0;i<=k;i++){
            ans=max(ans,lftsum[i]+rgtsum[k-i]);
        }
        return ans;
    }
};
