#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> a)
{
    int n = a.size();
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == 0)
            {
                int len = j - i + 1;
                maxlen = max(maxlen, len);
            }
        }
    }
    return maxlen;
}
int main()
{
    vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << solve(a) << endl;

    return 0;
}
//O(n^2) and O(1)SC
