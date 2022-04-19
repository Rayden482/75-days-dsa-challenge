class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lth=0;
        for(int i=0;i<=lth;i++){
            lth=max(lth,i+nums[i]);
            if(lth>=nums.size()-1){
                return 1;
            }
        }
        return 0;
    }
};