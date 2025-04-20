class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                   int diff1=abs(arr[i]-arr[j]);
                   int diff2=abs(arr[j]-arr[k]);
                   int diff3=abs(arr[i]-arr[k]);
                   if(diff1<=a && diff2<=b && diff3<=c) ans++;
                }
            }
        }
        return ans;
    }
};