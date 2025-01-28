#include <bits/stdc++.h>
using namespace std;
void merge(long long arr1[], long long arr2[], int n, int m)
{
    long long arr3[m + n];
    int left = 0, right = 0, index = 0;
    while (left < n && right < m)
    {
        if (arr1[left] < arr2[right])
        {
            arr3[index] = arr1[left];
            left++, index++;
        }
        else
        {
            arr3[index] = arr2[right];
            right++, index++;
        }
    }
    while (left < n)
    {
        arr3[index] = arr1[left];
        left++, index++;
    }
    while (right < m)
    {
        arr3[index] = arr2[right];
        right++, index++;
    }
    for (int i = 0; i < (m + n); i++)
    {
        if (i < n)
        {
            arr1[i] = arr3[i];
        }
        else
            arr2[i - n] = arr3[i];
    }
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
