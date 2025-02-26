#include <bits/stdc++.h>
using namespace std;
int f(long long mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}
int NthRoot(int n, int m)
{
    int low = 0, high = m;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (f(mid, n, m) == 1)
        {
            return mid;
        }
        else if (f(mid, n, m) == 2)
        {
            high = mid - 1;
        }
        else if (f(mid, n, m) == 0)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n = 3, m = 81;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
    return 0;
}