class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        // vitthal fvfd
        vector<int> arr(m+n);
        if(m+n==1)
        {
            num1[0]=1;
        }
        else
        {
        int i=0;
        int j=0;
        int k=0;
        while(i<m && j<n)
        {
            if(num1[i]<num2[j])
            {
                arr[k]=num1[i];
                k++;
                i++;
            }
            else if(num2[j]<num1[i])
            {
                arr[k++]=num2[j];
                j++;
            }
            else
            {
            arr[k++]=num1[i++];
            arr[k++]=num2[j++];
            }
        }
        while(i<m)
        {
            arr[k++]=num1[i++];
        }
         while(j<n)
        {
            arr[k++]=num2[j++];
        }
        int v=0;
        int t=0;
        while(v<(m+n))
        {
            num1[v++]=arr[t++];
        }
    }
    }
};