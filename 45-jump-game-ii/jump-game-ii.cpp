class Solution {
public:
    int jump(vector<int>& nums) {
      int l=0;
      int r=0;
      int jump=0;
      int n=nums.size();
      int farthest=0;
      while(r<n-1)
      {
        for(int i=l;i<=r;i++)
        {
          if(r>=n-1) return jump;
         farthest=max(farthest,i+nums[i]);
        }
        l=r+1;
        r=farthest;
        jump++;
      }
      
      return jump;
    }
};