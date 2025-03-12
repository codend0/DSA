#include <bits/stdc++.h>
using namespace std;
long double minimiseMaxDistance(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> mark(n - 1, 0);//this is marking how  many gas station placed between two existing one it is always n-1
    for (int i = 1; i <= k; i++)
    {
        long double maxIndex = -1, maxSec = -1;
        //this loop is for 
        for (int i = 0; i < n; i++)
        {
            long double dif = arr[i + 1] - arr[i];
            //for section length
            long double section = dif / (long double)mark[i] + 1;
            if (section > maxSec)
            {
                maxSec = section;
                maxIndex = i;
            }
        }
        mark[maxIndex]++;
    }
    long double ans = -1;
    for (int i = 0; i < n; i++)
    {
        long double dif = arr[i + 1] - arr[i];
        long double section = dif / (long double)mark[i] + 1;
        ans = max(section, ans);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
//TC IS O(k*n)+O(n)