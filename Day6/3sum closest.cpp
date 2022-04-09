class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        // cout << nums[2] << '\n';
        int diff=INT_MAX;
        int ans;
        // cout << ans << '\n';
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int fr=i+1;
            int bk=nums.size()-1;
            while(fr<bk){
                if(a+nums[fr]+nums[bk]==target){
                    return target;
                }
                else if(abs(a+nums[fr]+nums[bk]-target)<diff){
                    diff=abs(a+nums[fr]+nums[bk]-target);
                    ans = a+nums[fr]+nums[bk];
                }
                if(a+nums[fr]+nums[bk]<target){
                    fr++;
                }
                else{
                    bk--;
                }
            }
        }
        return(ans);
    }
};
