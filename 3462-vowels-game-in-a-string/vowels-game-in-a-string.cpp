class Solution {
public:
    bool doesAliceWin(string s) {
        int count = 0;
        for(int i = 0;i<s.size();i++){
            if(vowel(s[i])) return true;
        }
        return false;
    }
    bool vowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
};