#include <bits/stdc++.h>
using namespace std;

// Function to find elements that appear more than n/3 times in the array
vector<int> majorityElement(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;

    // Iterate through the array to find majority elements
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        // Check if the current element is not already in the result vector
        if (ans.size() == 0 || ans[0] != arr[i]) 
        {
            // Count occurrences of the current element in the array
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    cnt++;
                    // If count exceeds n/3, add it to the result
                    if (cnt > n / 3)
                        ans.push_back(arr[i]);
                }
            }
        }

        // Break the loop if we already have two elements in the result
        // because there can be at most two majority elements for n/3 condition
        if (ans.size() == 2)
            break;
    }

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
