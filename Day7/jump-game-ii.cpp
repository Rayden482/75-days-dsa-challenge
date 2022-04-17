class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0,curmax=0;jmp=0;
        for(int i=0;i<nums.size()-1;i++){
            if(i+nums[i]>curmax){
                curmax=i+nums[i];
            }
            if(i==curr){
                jmp++;
                curr=curmax;
            }
        }
        return jmp;
    }
};
