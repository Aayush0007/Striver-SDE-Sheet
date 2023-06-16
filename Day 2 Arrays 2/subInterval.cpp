/*
Merge all overlapping sub interval
Input: {{1,3}, {2,6}, {8,9}, {9,11}, {8,10},{2,4}.{15,18},{16,17}}
Output: {1,6}, {8,11}, {15,18}

Explanation: 1 2 3 4 6    8 9 10 11    15 16 17 18
             1 6          8 11         15 18
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappinngInterval(vector<vector<int>> merge)
{
    int n = merge.size();
    sort(merge.begin(), merge.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        int start = merge[i][0];
        int end = merge[i][1];
        if (!ans.empty() && end <= merge.back()[1])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (merge[j][0] <= end)
            {
                end = max(end, merge[j][1]);
            }
            else
            {
                break;
            }
        }

        ans.push_back({start, end});
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr, merge;
    arr = {{1, 3}, {2, 6}, {8, 9}, {9, 11}, {8, 10}, {2, 4}, {15, 18}, {16, 17}};

    merge = mergeOverlappinngInterval(arr);
    int n = merge.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << merge[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}