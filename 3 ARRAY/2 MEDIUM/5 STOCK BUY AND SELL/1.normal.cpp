#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> prices = {7, 1, 4, 5, 6, 2, 3};
    int n = prices.size();
    int buy = INT_MAX;
    int maxprofit = 0;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < buy)
        {
            buy = prices[i];
        }
        else if (maxprofit < prices[i] - buy)
        {
            maxprofit = prices[i] - buy;
        }
    }
}