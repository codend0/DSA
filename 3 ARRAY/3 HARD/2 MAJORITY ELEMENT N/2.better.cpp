#include <bits/stdc++.h>
using namespace std;

// Function to find elements that appear more than n/3 times in the array
vector<int> majorityElement(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> mpp; // Map to store frequency of elements

    // Traverse the array and count occurrences of each element
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++; // Increment frequency of the current element

        // Check if the current element's frequency exceeds n/3
        if (mpp[arr[i]] > n / 3)
        {
            ans.push_back(arr[i]); // Add it to the result vector
        }

        // Stop if we have already found two majority elements
        if (ans.size() == 2)
            break;
    }

    // Sort the result vector for consistency
    sort(begin(ans), end(ans));

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
        cout << it << " ";
    cout << "\n";

    return 0;
}
