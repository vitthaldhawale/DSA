class Solution {
public:
    bool isPalindrome(string s) {

        string ans="";
        for(char c:s)
        {
            if(isalnum(c))
            {
                ans+=tolower(c);
            }
        }
        int l=0,r=ans.size()-1;
        while(l<=r)
        {
            if(ans[l]==ans[r])
            {
                l++;
                r--;
            }
            else return false;
        }
    return true;
    }
};