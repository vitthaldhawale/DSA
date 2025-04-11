class Solution {
public:
    int countDigits(int num) {
        if (num == 0) return 1;
        return floor(log10(abs(num))) + 1;
    }
    bool valid(int half,int num)
    {
        int cnt=0;
        int ans=0;
        int leftsum=0;
        int rightsum=0;
        while(num>0)
        {
            int digit=num%10;
            ans+=digit;
            num/=10;
            cnt++;
            if(cnt==half)
            {
                leftsum=ans;
                ans=0;
            }
        }
        rightsum=ans;
        if(leftsum==rightsum) return true;
        return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int n=0;
        int ans=0;
        for(int i=low;i<=high;i++)
        {
            
            if(countDigits(i)%2==0)
            {
                n=countDigits(i);
                if(valid(n/2,i)==true) ans++;
            }
            
        }
        return ans;
    }
};