#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end()); // Sort nums here
    for (int i = 0; i < n; ++i)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // Skip duplicates for the first element
        for (int j = i + 1; j < n; ++j)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue; // Skip duplicates for the second element
            int k = j + 1, l = n - 1;
            while (k < l)
            {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];
                if (sum > target)
                {
                    l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++; // Skip duplicates for the third element
                    while (k < l && nums[l] == nums[l + 1])
                        l--; // Skip duplicates for the fourth element
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans)
    {
        cout << "[ ";
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}
