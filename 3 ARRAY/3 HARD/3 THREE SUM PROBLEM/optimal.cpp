#include <bits/stdc++.h>
using namespace std;

// Function to find all unique triplets in the array that sum to zero
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    
    // Sort the array to facilitate the two-pointer approach
    sort(arr.begin(), arr.end());
    
    // Traverse the array with a fixed pointer
    for (int i = 0; i < n; i++)
    {
        // Skip duplicate elements for the fixed pointer to avoid duplicate triplets
        if (i > 0 && arr[i - 1] == arr[i])
            continue;

        // Initialize two pointers
        int j = i + 1;
        int k = n - 1;

        // Use two-pointer approach to find pairs that sum with arr[i] to zero
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            
            // If sum is greater than zero, decrease the right pointer
            if (sum > 0)
            {
                k--;
            }
            // If sum is less than zero, increase the left pointer
            else if (sum < 0)
            {
                j++;
            }
            // If sum equals zero, we found a valid triplet
            else
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                
                // Move both pointers to look for other pairs
                j++;
                k--;
                
                // Skip duplicates for the left pointer
                while (j < k && arr[j] == arr[j - 1])
                    j++;
                // Skip duplicates for the right pointer
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    // Example input array
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    
    // Get all unique triplets
    vector<vector<int>> ans = triplet(n, arr);
    
    // Print the result
    for (auto it : ans)
    {
        cout << "[";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}
/* ```

### Explanation of Approach:
1. **Sorting the Array**: Sorting the array helps in efficiently applying the two-pointer technique and avoiding duplicates.
2. **Fixing One Element**: Iterate through the array, treating each element as a fixed one. The other two elements are found using the two-pointer technique.
3. **Skipping Duplicates**: To avoid duplicate triplets, skip duplicate elements for both the fixed element and the two pointers.
4. **Two-Pointer Technique**: Use two pointers (`j` and `k`) to find pairs that sum with the fixed element to zero.
5. **Updating Results**: When a valid triplet is found, add it to the result vector.

### Time Complexity:
- **Sorting**: \(O(n \log n)\)
- **Traversing with Fixed Pointer**: \(O(n)\)
- **Two-Pointer Search for Each Fixed Element**: \(O(n)\)
- **Overall**: \(O(n^2)\)

### Space Complexity:
- **Auxiliary Space for Sorting**: \(O(1)\) (if in-place sort is used)
- **Result Storage**: \(O(k)\), where \(k\) is the number of triplets found.

Thus, the space complexity is dominated by the size of the result vector.*/