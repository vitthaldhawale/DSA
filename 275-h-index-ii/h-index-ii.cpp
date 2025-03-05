class Solution {
public:
int func(vector<int>& arr,int mid)
{
    int cnt=0;
    for(int i=0;i<arr.size();i++)
    {
        if(mid<=arr[i]) cnt++;
    }
    return cnt;
}
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int s=0;
        int e=n;
        int mid=0;
        int ans=0;
        while(s<=e)
        {
            mid=(s+e)/2;
            int cntele=func(citations,mid);
            if(cntele>=mid)
            {
                s=mid+1;
                ans=mid;
            } 
            else e=mid-1;
        }
        return ans;
    }
}; 