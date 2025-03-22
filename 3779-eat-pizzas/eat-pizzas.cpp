class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n=pizzas.size();
        sort(pizzas.begin(),pizzas.end());
        int m=n/4;
        int odd_days=(m+1)/2;
        int even_days=m-odd_days;
        int indx=n-1;
        long long ans=0;
        for(int i=1;i<=odd_days;++i)
        {
            ans+=pizzas[indx];
            --indx;
        }
        for(int i=1;i<=even_days;++i)
        {
            --indx;
            ans+=pizzas[indx];
            --indx;
        }
        return ans;
    }
};