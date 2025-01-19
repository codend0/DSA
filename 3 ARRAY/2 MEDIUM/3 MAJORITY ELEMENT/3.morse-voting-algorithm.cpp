#include <bits/stdc++.h>
using namespace std;
int max(int arr[], int n)
{
    int count = 0;
    int el;

    /*int morse voting algorithm what we do is we itterate in array and check if the next
    element is same then we increase the count by one and decrese by one if it is not that
    number and if the elemnent on ending is not equal to zero than we check if  it is majority
    by again itterating in the loop
    */

    // step 1
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            el = arr[i];
        }
        else if (el == arr[i])
            count++;
        else
            count--;
    }

    // checking part
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            count1++;
            if (count1 > n / 2)
            {
                return el;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = size(arr);
    cout << max(arr, n);
    return 0;
}
// TC is O(n) and SC is O(1)