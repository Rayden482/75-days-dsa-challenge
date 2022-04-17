class Solution {

public:
    void findcombo(int index,int target,vector<int> &a,vector<vector<int>> &ans, vector<int> &dns){
        if(index==a.size()){
            if(target == 0){
                ans.push_back(dns);
            }
            return;
        }
        if(target>=a[index]){
            dns.push_back(a[index]);
            findcombo(index,target-a[index],a,ans,dns);
            dns.pop_back();
        }
        findcombo(index+1,target,a,ans,dns);
    }
    
    
    
    
    
    
    
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> dns;
        findcombo(0,target,candidates,ans,dns);
        return ans;
    }
};
