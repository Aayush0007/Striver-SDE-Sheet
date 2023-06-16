/*
Input-->
1 2 3
4 5 6
7 8 9

Output-->
7 4 1
8 5 2
9 6 3

Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix
First transpose the matrix then reverse the row element.

1 4 7
2 5 8
3 6 9

7 4 1
8 5 2
9 6 3

*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            swap(arr[i][j], arr[j][i]);
    }

    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    return arr;
}

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<vector<int>> rotated = rotate(arr);

    for (int i = 0; i < rotated.size(); i++)
    {
        for (int j = 0; j < rotated.size(); j++)
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}