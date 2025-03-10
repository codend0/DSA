#include <bits/stdc++.h>
using namespace std;
int maxPainter(int board, vector<int> &boards, int k, int n)
{
    int painter = 1;
    long long paintSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (paintSum + boards[i] <= board)
        {
            paintSum += boards[i];
        }
        else
        {
            painter++;
            paintSum = boards[i];
        }
    }
    return painter;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    if (n < k)
    {
        return -1;
    }
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    for (int i = low; i <= high; i++)
    {
        if (maxPainter(i, boards, k, n) == k)
        {
            return i;
        }
    }
    return high;
}
int main()
{
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    int ans = findLargestMinDistance(boards, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}