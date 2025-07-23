class Solution {
public:
    bool isValid(string word) {
        int charcnt = word.size();
        int vowelcnt = 0;
        int consonent_cnt = 0;
        int digitcnt = 0; 
        bool isnum = false;

        for(int i=0; i<word.size(); i++)
        {
            char n = word[i];
            if(n=='a'|| n=='e'|| n=='i'|| n=='o'|| n=='u'|| n=='A'|| n=='E'|| n=='I'|| n=='O'|| n=='U')
            {
                vowelcnt++;
            }
            else if(n=='0'||n=='1'||n=='2'||n=='3'||n=='4'||n=='5'||n=='6'||n=='7'||n=='8'||n=='9')
            {
                digitcnt++;
                isnum = true;
            }
            else if(n=='!'||n=='@'||n=='#'||n=='$'||n=='%'||n=='^'||n=='&'||n=='*')
            {
                 return false;
                continue;
            }
            else
            {
                consonent_cnt++;
            }

        }
        if(digitcnt == charcnt && charcnt>=3) return true;
        if(isnum== false && charcnt>=3 && vowelcnt!=0 && consonent_cnt!=0) return true;
        if(vowelcnt !=0 && consonent_cnt !=0 && isnum != false && charcnt >=3)
        {
            return true;
        }
        return false;
    }
};