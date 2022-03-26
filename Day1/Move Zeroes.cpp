class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(auto i: nums){
            if(i==0){
                count ++;
            }
        }
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        for(int i =0;i<count;i++){
            nums.push_back(0);
        }
        
    }
};
