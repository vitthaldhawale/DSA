class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n =digits.size();
        vector<int> ans;
        long long value=0;
        for(int i=0;i<n;i++)
        {
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++)
            {
                if(j==i) continue;
                for(int k=0;k<n;k++)
                {
                    if(k==i || k==j) continue;
                    else
                    {
                        value=100*digits[i]+10*digits[j]+digits[k];
                        if(value%2==0) ans.push_back(value);
                    }    
                }
            }
        }
        sort(ans.begin(),ans.end());
        set<int> s(ans.begin(),ans.end());
        return vector<int> (s.begin(),s.end());
    }
};