class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int s=0;  
        int ans=0;
        for(int i=0;i<n;i++)
        {
            s+=gain[i];
            ans=max(ans,s);
        } 
        return ans;
    }
};