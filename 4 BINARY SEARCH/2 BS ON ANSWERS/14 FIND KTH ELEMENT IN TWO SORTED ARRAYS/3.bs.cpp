#include <bits/stdc++.h>
using namespace std;
int kthElement(vector<int> &a, vector<int> &b, int n1, int n2, int k)
{
    if (n1 > n2) return kthElement(b, a, n2, n1, k);
    int low = max(0, k - n2); // agar k bada hai than b so we have to min take k-n2
    int high = min(k, n1);    // kitni bar bs apply ho skata hai
    int left = k;
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
            return max(l1,l2);
        }
        if (l1 > r2)
        {
            // if l1 is greater than reduce
            high = mid1 - 1;
        }
        else
        {
            // if l2 is greater we need to increase arr1  result in reduce arr2
            low = mid1 + 1;
        }
    }
}
int main()
{
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    cout << "The k-ht element of two sorted array is: " << kthElement(a, b, a.size(), b.size(), 5) << '\n';
    return 0;
}