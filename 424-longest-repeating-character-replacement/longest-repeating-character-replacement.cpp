class Solution {
public:
    int characterReplacement(string s, int k) { 
        int maxlen = 0; 
        int n = s.size();
        vector<int> map(26,0);
        int l=0,r=0,maxfreq=0;
        while(r<n)
        {
            map[s[r]-'A']++;
            maxfreq = max(maxfreq,map[s[r]-'A']);
            while((r-l+1) - maxfreq > k)
            {
                map[s[l]-'A']--;
                maxfreq = 0;
                for(int i=0;i<26;i++)
                {
                    maxfreq = max(maxfreq,map[i]);
                }
                l+=1;
            }
            if((r-l+1) - maxfreq <= k)
            {
                maxlen = max(maxlen,(r-l+1));
            } 
            r++;
        }
        
        return maxlen;
    }
};