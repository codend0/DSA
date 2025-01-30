#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    int n = a.size();
    long long s1 = n * (n + 1) / 2;
    long long s2 = (n * (n + 1) * (2 * n + 1)) / 6;
    long long gs1 = 0, gs2 = 0;
    for (int i = 0; i < n; i++)
    {
        gs1 += a[i];
        gs2 += a[i] * a[i];
    }
    long long eq1 = s1 - gs1;
    long long eq2 = s2 - gs2;
    long long eq3 = eq2 / eq1;
    long long x = (eq3 + eq1) / 2;
    long long y = eq3 - x;
    return {(int)x, (int)y};
}
int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}
//TC IS O(n) SC O(1)