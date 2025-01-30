#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    int n = a.size();
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                cnt++;
            }
        }
        if (cnt == 2 || cnt == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}
