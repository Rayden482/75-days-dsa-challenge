class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int length = digits.size();
        int carry = 1;
        int temp;
        vector<int> ans;
        for(int i = length - 1; i >= 0; --i)
        {
            temp = digits[i] + carry;
            carry = temp > 9 ? 1 : 0;
            temp %= 10;
            ans.push_back(temp);
        }
        if(carry == 1){
            ans.push_back(carry);
        }
        
    reverse(ans.begin(), ans.end());
    return (ans);
    }
};
