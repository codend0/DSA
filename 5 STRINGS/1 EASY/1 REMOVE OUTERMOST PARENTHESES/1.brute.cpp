class Solution {
    public:
        string removeOuterParentheses(string s) {
            string st;
            int cnt=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==')')cnt--;
                if(cnt>0)st.push_back(s[i]);
                if(s[i]=='(')cnt++;
            }
            return st;
        }
    };