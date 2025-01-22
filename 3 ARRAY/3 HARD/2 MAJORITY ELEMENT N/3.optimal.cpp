#include <bits/stdc++.h>
using namespace std;

// Using Moore's Voting Algorithm
pair<int, int> votingAlgo(vector<int> &arr)
{
    int el1 = INT_MIN, el2 = INT_MIN;
    int cnt1 = 0, cnt2 = 0;

    for (int num : arr)
    {
        if (cnt1 > 0 && num == el1)
        {
            cnt1++;
        }
        else if (cnt2 > 0 && num == el2)
        {
            cnt2++;
        }
        else if (cnt1 == 0)
        {
            el1 = num;
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            el2 = num;
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    return {el1, el2};
}

// Function to find elements that appear more than n/3 times in the array
vector<int> majorityElement(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    auto [el1, el2] = votingAlgo(arr);
    int c1 = 0, c2 = 0;
    //checking...
    // Count occurrences of el1 and el2
    for (int num : arr)
    {
        if (num == el1)
            c1++;
        else if (num == el2)
            c2++;
    }

    int mini = n / 3 + 1;
    if (c1 >= mini)
        ans.push_back(el1);
    if (c2 >= mini)
        ans.push_back(el2);

    return ans;
}

int main()
{
    // Example array to test the function
    vector<int> arr = {11, 33, 33, 11, 33, 11};

    // Find the majority elements
    vector<int> ans = majorityElement(arr);

    // Print the majority elements
    cout << "The majority elements are: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}
