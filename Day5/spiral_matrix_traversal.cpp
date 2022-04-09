class Solution {
public:
    vector<int> spiralOrder(const vector<vector<int> > &A) {
    
    int Top,Bot,Left,Right,dir;
    Top=0;
    Bot=A.size()-1;
    Left=0;
    Right=A[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(Top<=Bot && Left<=Right)
    {
        if(dir==0)
        {
            for(i=Left;i<=Right;i++)
                ans.push_back(A[Top][i]);
            Top++;
        }
        else if(dir==1)
        {
            for(i=Top;i<=Bot;i++)
                ans.push_back(A[i][Right]);
            Right--;
        }
        else if(dir==2)
        {
            for(i=Right;i>=Left;i--)
                ans.push_back(A[Bot][i]);
            Bot--;
        }
        else if(dir==3)
        {
            for(i=Bot;i>=Top;i--)
                ans.push_back(A[i][Left]);
            Left++;
        }
        dir=(dir+1)%4;
    }
    return ans;
}
};
