class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double temp = 0;
        int ans=0;
        for(int i=0;i<dimensions.size();i++)
        {
            int val1 = dimensions[i][0];
            int val2 = dimensions[i][1];
            double sqt = sqrt(val1*val1 + val2*val2);
            int tempans = val1*val2;
            if(sqt>temp)
            {
                temp = sqt;
                ans=tempans;
            }
            else if(sqt == temp)
            {
                ans = max(ans,tempans);
            }
        }
        return ans;
    }
};