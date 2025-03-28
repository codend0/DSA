#include <bits/stdc++.h>
using namespace std;
double median(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int n = n1 + n2;
    int low = 0, high = n1;
    // left half size
    int left = (n1 + n2 + 1) / 2;
    while (low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;
        int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1)
            r1 = a[mid1];
        if (mid2 < n2)
            r2 = b[mid2];
        if (mid1 - 1 >= 0)
            l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0)
            l2 = b[mid2 - 1];
        if (l1 <= r2 && l2 <= r1)
        {
            if (n % 2 == 1)
            {
                return max(l1, l2);
            }
            else
            {
                return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
            }
            if (l1 > r2)
            {
                //if l1 is greater than reduce 
                high = mid1 - 1;
            }
            else
            {
                //if l2 is greater we need to increase arr1  result in reduce arr2
                low = mid1 + 1;
            }
        }
    }
    return 0;
}
int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(a, b) << '\n';
    return 0;
}
//TC O(log(min(n1,n2))),SC O(1)
#pragma GCC optimize("03,unroll-loops")