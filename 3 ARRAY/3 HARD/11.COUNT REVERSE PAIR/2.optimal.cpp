#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right])
            temp.push_back(a[left++]);
        else
            temp.push_back(a[right++]);
    }
    while (left <= mid)
        temp.push_back(a[left++]);
    while (right <= high)
        temp.push_back(a[right++]);

    for (int i = low; i <= high; i++)
        a[i] = temp[i - low];
}

int countpairs(vector<int> &a, int low, int mid, int high)
{
    int cnt = 0, right = mid + 1;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && a[i] > 2LL * a[right])
            right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mergesort(vector<int> &a, int low, int high)
{
    if (low >= high)
        return 0;

    int mid = (low + high) / 2;
    int cnt = 0;
    cnt += mergesort(a, low, mid);
    cnt += mergesort(a, mid + 1, high);
    cnt += countpairs(a, low, mid, high);
    merge(a, low, mid, high);

    return cnt;
}

int team(vector<int> &a, int n)
{
    return mergesort(a, 0, n - 1);
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = a.size();
    int cnt = team(a, n);
    cout << "The number of reverse pairs is: " << cnt << endl;
    return 0;
}
