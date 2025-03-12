#include <bits/stdc++.h>
using namespace std;
long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> mark(n - 1, 0); // this is marking how  many gas station placed between two existing one it is always n-1
    priority_queue<pair<long double, int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({arr[i + 1] - arr[i], i});
    }
    for (int i = 1; i <= k; i++)
    {
        auto tp = pq.top();
        pq.pop();
        int second = tp.second;
        mark[second]++;
        long double dif = arr[second + 1] - arr[second];
        long double section = dif / (long double)mark[second] + 1;
        pq.push({section, second});
    }
    return pq.top().first;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
// TC IS O(k*n)+O(n)