class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int area=0;
        int n=height.size();
       int s=0,e=n-1;
       while(s<e)
       {
        if(height[s]<height[e])
        {
            area=height[s]*(e-s);
            s++;
        }
        else if(height[s]>height[e])
        {
            area=height[e]*(e-s);
            e--;
        }
        else
        {
            area=height[s]*(e-s);
            s++;
            e--;
        }
         ans=max(ans,area);
       }
       return ans;
    }
};