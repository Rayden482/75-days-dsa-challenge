class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
        int sumlft=0;
        
        for(int i=0;i<nums.size();i++){
            int sumrgt=total-sumlft-nums[i];
            if(sumlft==sumrgt){
                return(i);
            }
            sumlft+=nums[i];
        }
        return(-1);
    }
};
