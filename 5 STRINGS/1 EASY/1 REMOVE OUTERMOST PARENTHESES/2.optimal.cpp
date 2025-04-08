class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int cnt = 0, index = 0;
        for (int i = 0, i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                if (cnt > 0)
                    s[index++] == '(';
                cnt++;
            }
            else if (s[i] == ')')
            {
                cnt--;
                if (cnt > 0)
                    s[index++] == ')';
            }
            s.resize(index); // resize the string till index and delte extra back part
            return s;
        }
    }
};