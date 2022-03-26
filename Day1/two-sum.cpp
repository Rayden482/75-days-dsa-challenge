
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int tmp = target-nums[i];
            if(!(mp.count(tmp))){
                mp[nums[i]]=i;
            }
            else{
                ans.push_back(mp[tmp]);
                ans.push_back(i);
            }
        }
        return(ans);
        
    }
};
