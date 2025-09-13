class Solution {
public:
    string sortVowels(string s) {
        vector<int> vowel;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s                [i]=='I' ||s[i]=='O' ||s[i]=='U')
            {
                vowel.push_back(s[i]-'A');
            }
        }
        sort(vowel.begin(),vowel.end());
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s                [i]=='I' ||s[i]=='O' ||s[i]=='U')
            {
                s[i]=vowel[k++]+'A';
            }
        }
        return s;
    }
};