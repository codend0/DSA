#include <bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int> a)
{
    int n = a.size();
    if (n == 0)
        return 0; // return 0 if size is zero
    int longest = 1;
    unordered_set<int> st; // we are using a unorder set so the TC is O(n)
    // inerting in unordered set
    /*so basically our approach is to insert the element of vector in set and remove duplicate*/
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    { // here also O(n)
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x += 1;
                count += 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
// so the TC O(2n) and SC is O(n)