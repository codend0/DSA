#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    vector<int> ans;
    int n = a.size();
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
            ans.push_back(i);
        else if (hash[i] == 0)
            ans.push_back(i);
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
