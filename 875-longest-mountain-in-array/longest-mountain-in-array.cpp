class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int cnt=0;
        int n=arr.size();
        int ele=1;
        while(ele<n-1)
        {
            int i=ele-1;
            int j=ele+1;
            if(arr[i]<arr[ele] && arr[j]<arr[ele])
            {
                while(i>0 && arr[i-1]<arr[i]) i--; 
                while(j<n-1 && arr[j+1]<arr[j]) j++;        
                cnt=max(cnt,((j-i)+1));
            }
            ele++;
        }
        return cnt;
    }
};