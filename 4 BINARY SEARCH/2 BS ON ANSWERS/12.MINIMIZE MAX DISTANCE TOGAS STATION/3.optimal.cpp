#include <bits/stdc++.h>
using namespace std;

int numberofgasstation(vector<int> &arr, long double mid)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) // Fix: loop should go till n-1
    {
        int numberinbetween = (arr[i + 1] - arr[i]) / mid;
        if ((arr[i + 1] - arr[i]) == (mid * numberinbetween))
        {
            numberinbetween--;
        }
        cnt += numberinbetween;
    }
    return cnt; // Fix: Return the count
}

long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size();
    long double low = 0, high = 0;

    // Fix: Find the actual max distance, remove 'high = n - 1'
    for (int i = 0; i < n - 1; i++)
    {
        high = max(high, (long double)(arr[i + 1] - arr[i]));
    }

    long double diff = 1e-6;
    while (high - low > diff)
    {
        long double mid = (low + high) / 2.0;
        int cnt = numberofgasstation(arr, mid);
        if (cnt > k)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return high;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
