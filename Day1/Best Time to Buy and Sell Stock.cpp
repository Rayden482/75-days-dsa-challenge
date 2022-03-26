class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int tod=0;
        int ov = 0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            ov=max(ov,prices[i]-mini);
        }
        return(ov);
    }
};
