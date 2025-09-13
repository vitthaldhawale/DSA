class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> map(26);
        int maxvowel = 0;
        int maxconsonent = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
            {
                map[s[i]-'a']++;
                maxvowel = max(maxvowel,map[s[i]-'a']);
            }
            else
            {
                map[s[i]-'a']++;
                maxconsonent = max(maxconsonent,map[s[i]-'a']);
            }
        }
        return maxvowel+maxconsonent;
    }
};