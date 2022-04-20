class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1){
            return 0;
        }
        int cost1=INT_MAX,prof1=0,cost2=INT_MAX,prof2=0;
        for(int i:prices){
            cost1=min(cost1,i);
            prof1=max(prof1,i-cost1);
            cost2=min(cost2,i-prof1);
            prof2=max(prof2,i-cost2);
        }
        return prof2;
    }
}
