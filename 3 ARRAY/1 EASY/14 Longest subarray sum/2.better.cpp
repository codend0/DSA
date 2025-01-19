#include <bits/stdc++.h>
using namespace std;

int getlongsubarray(vector<int> a, long long k)
{
    int n = a.size(); // size of array
    // we initiallize initial length to 0
    int len = 0;
    // i to n
    for (int i = 0; i < n; i++)
    {
        long long s = 0;
        // j start from i to n
        for (int j = i; j < n; j++)
        {
            // we add in sum
            s += a[j];
            // if sum is equal to k
            if (s == k)
            {
                // then length will be maximum of len and j-i+1 because we want longest subarray
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getlongsubarray(a, k);
    cout << "The longest subarray sum is :" << len;
}
// so the TC is about O(n2)