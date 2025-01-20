#include <bits/stdc++.h>
using namespace std;

// Function to find all subarrays with a given sum using prefix sum and hash map
int findAllSubarraysWithGivenSum(vector<int> arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    unordered_map<int, int> mpp; // Hash map to store counts of prefix sums
    mpp[0] = 1;                 // Initialize to handle subarrays starting at index 0
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];           // Update running sum
        int rem = sum - k;       // Calculate the remaining sum needed
        if (mpp.find(rem) != mpp.end())
        {                        // Check if the remainder exists in the map
            cnt += mpp[rem];     // Increment count by the occurrences of the remainder
        }
        mpp[sum] += 1;           // Update the count of the current prefix sum
    }
    return cnt;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
