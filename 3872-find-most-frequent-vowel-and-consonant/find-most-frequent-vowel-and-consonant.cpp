class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> map(26);
        int maxvowel = 0;
        int maxconsonent = 0;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
            {
                maxvowel = max(maxvowel,map[s[i]-'a']);
            }
            else
            {
                maxconsonent = max(maxconsonent,map[s[i]-'a']);
            }
        }
        return maxvowel+maxconsonent;
    }
};