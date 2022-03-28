class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {
        if (inte.size()<2){
            return inte;
        }
        sort(inte.begin(),inte.end());
        int index=0;
        for(int i=1;i<inte.size();i++){
           if(inte[index][1]>=inte[i][0]){
               inte[index][1]=max(inte[index][1],inte[i][1]);
               
           }
            else{
                inte[++index]=inte[i];
            }
        }
        inte.resize(index+1);
        return inte;
        
        }
    };
