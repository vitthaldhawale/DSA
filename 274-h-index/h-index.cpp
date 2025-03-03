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
        // vitthal
        int cnt=0;
        int n=citations.size();
        int s=0;
        int e=n;
        int mid=0;
        int cntfunc=0;
        while(s<=e)
        {
            mid=(s+e)/2;
            cnt=func(citations,mid);
            if(cnt>=mid)
            {
                s=mid+1;
                cntfunc=mid;
            } 
            else e=mid-1;
        }
        
    return cntfunc;
    }
};