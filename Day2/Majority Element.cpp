class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size(),tmp=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            // cout << i.first << ":-" << i.second << '\n';
            if(i.second>(n/2)){
                tmp = i.first;
                break;
            }
        }
        return(tmp);
        
    }
};
