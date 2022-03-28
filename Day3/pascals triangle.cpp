class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> tmp;
        for(int i=0;i<numRows;i++){
            int prev=1;
            tmp.push_back(prev);
            for(int j=1;j<=i;j++){
                int curr = (prev*(i+1-j))/j;
                tmp.push_back(curr);
                prev=curr;
            }
            ans.push_back(tmp);
            tmp.clear();
        }
        return(ans);
    }
};
