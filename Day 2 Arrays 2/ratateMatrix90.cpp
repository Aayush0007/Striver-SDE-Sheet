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
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> arr)
{
    int n = arr.size();
    vector<vector<int>> rot(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rot[j][n - i - 1] = arr[i][j];
        }
    }
    return rot;
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