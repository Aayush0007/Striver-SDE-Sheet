#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generatePermutations(vector<int> &nums, int start, vector<vector<int>> &result)
{
    if (start >= nums.size())
    {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++)
    {
        swap(nums[start], nums[i]);
        generatePermutations(nums, start + 1, result);
        swap(nums[start], nums[i]); // Backtrack
    }
}

vector<int> nextPermutation(vector<int> &nums)
{
    vector<vector<int>> permutations;
    generatePermutations(nums, 0, permutations);
    sort(permutations.begin(), permutations.end());

    auto it = find(permutations.begin(), permutations.end(), nums);
    if (it != permutations.end() && next(it) != permutations.end())
    {
        return *(next(it));
    }

    // If no next permutation found, return the sorted sequence
    sort(nums.begin(), nums.end());
    return nums;
}

int main()
{
    vector<int> nums = {1,2,3};

    cout << "Original Sequence: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nextPerm = nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int num : nextPerm)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
