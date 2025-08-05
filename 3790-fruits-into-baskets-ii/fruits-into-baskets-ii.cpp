class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       int n = fruits.size();
       int ans=0;
       for(int i=0;i<n;i++)
       {
            int fruit = fruits[i];
            for(int j=0;j<n;j++)
            {
                if(baskets[j]>=fruit)
                {
                    baskets[j]=-1;
                    break;
                }
                else if(j==n-1 && baskets[j]<fruit) ans++;
            }
       }
       return ans;
    }     
};