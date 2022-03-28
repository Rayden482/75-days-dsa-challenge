class Solution {
public:
    
    
    vector<vector<int>> threeSum(vector<int>& num) {
        sort(num.begin(),num.end());
        vector<vector<int>> res;
        for(int i=0;i<num.size();i++){
            int goal = -num[i];
            int fr = i+1;
            int bk = num.size()-1;
            while(fr<bk){
                int sum = num[fr]+num[bk];
                if(sum<goal){
                    fr++;
                }
                else if(sum>goal){
                    bk--;
                }
                else{
                    vector<int> tri = {num[i],num[fr],num[bk]};
                    res.push_back(tri);
                    while(fr<bk && num[fr]==tri[1]){
                        fr++;
                    }
                    while(fr<bk && num[bk]==tri[2]){
                        bk--;
                    }
                }
            }
            while(i+1<num.size() && num[i+1]==num[i]){
                i++;
            }
        }
        return(res);
    }
};
