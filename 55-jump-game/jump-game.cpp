class Solution {
public:
    bool canJump(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int maxind=0;
        if(n==1) return true;
        // if(n==2 && nums[s]>=1) return true ;
        // int temp=-1;
        // while(temp!=s && s<n)
        // {
        //     if(s==n-1) return true;
        //     temp=s;
        //     s=s+nums[s];
        // }
        while(s<n)
        {
            if(s>maxind) return false;
            maxind=max(maxind,(s+nums[s]));
            s++;
        }  
        return true;

    }
};