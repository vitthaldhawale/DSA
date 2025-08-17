class Solution {
public:
    int maxArea(int h, int w, vector<int>& hori, vector<int>& verti) {
        long long maxverti = 0;
        long long maxhori = 0;
        int n=hori.size();
        int m=verti.size();
        sort(hori.begin(),hori.end());
        sort(verti.begin(),verti.end());
        maxhori = max(maxhori,(long long)(verti[0]));
        maxverti = max(maxverti,(long long)(hori[0]));
        maxhori = max(maxhori,(w-(long long)verti[m-1]));
        maxverti = max(maxverti,(h-(long long)hori[n-1]));
        long long modulo = 1e9+7;
        int i=0;
        while(i<m-1)
        {
            maxhori = max(maxhori,((long long)verti[i+1]-(long long)verti[i]));
            i++;
        }
        int j=0;
        while(j<n-1)
        {
            maxverti = max(maxverti,((long long)hori[j+1]-(long long)hori[j]));
            j++;
        }

        return (long long)(maxhori*maxverti)%modulo;
    }
};