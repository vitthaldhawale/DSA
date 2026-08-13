class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int l=0;
        int r = n-1;
        int ans = 0;
        while(l<=r){
            if(h[l]<=h[r]){ 
                ans = max(ans,h[l]*(r-l));
                l++;
            }
            else if(h[l]>h[r]) {
                ans = max(ans,h[r]*(r-l));
                r--;
            }
        }
        return ans;
    }
};