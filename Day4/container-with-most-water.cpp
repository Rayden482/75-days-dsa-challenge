class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxa=0;
        int lft=0,rgt=height.size()-1;
        while(lft<rgt){
            int minh=min(height[lft],height[rgt]);
            maxa=max(maxa,minh*(rgt-lft));
            height[lft]<height[rgt]?lft++:rgt--;
            if(lft==rgt){
                lft++;
            }
        }
        return(maxa);
    }
};
