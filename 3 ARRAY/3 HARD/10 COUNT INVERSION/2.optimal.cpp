#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &a, int low, int mid, int high)
{
    int cnt = 0;
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (a[left] > a[right])
        {
            temp.push_back(a[right]);
            cnt += (mid - left + 1);
            right++;
        }
        else
        {
            temp.push_back(a[left]);
            left++;
        }
    }

    while (left <= mid)
        temp.push_back(a[left++]);
    while (right <= high)
        temp.push_back(a[right++]);

    for (int i = low; i <= high; i++)
    { // Fixing incorrect index
        a[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int> &a, int low, int high)
{
    if (low >= high)
        return 0; // Base case

    int cnt = 0;
    int mid = (low + high) / 2;

    cnt += mergeSort(a, low, mid);
    cnt += mergeSort(a, mid + 1, high);
    cnt += merge(a, low, mid, high);

    return cnt;
}

int numberOfInversions(vector<int> &a, int n)
{
    return mergeSort(a, 0, n - 1);
}

int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    int n = a.size();
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions are: " << cnt << endl;
    return 0;
}
