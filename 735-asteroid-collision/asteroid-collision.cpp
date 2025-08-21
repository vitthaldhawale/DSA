class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        list<int> st;
        int n = ast.size();
        for(int i=0;i<n;i++)
        {
            if(ast[i]>0) st.push_back(ast[i]);
            else 
            {
                while(!st.empty() && st.back()>0 && st.back()<abs(ast[i])) st.pop_back();
                if(!st.empty() && st.back() == abs(ast[i])) st.pop_back() ;
                else if(st.empty() || st.back()<0)
                {
                    st.push_back(ast[i]);
                }
            }
           
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};