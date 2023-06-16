/*
This is the naive approach to solve the dublicate in array in problem.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 5, 9, 6, 9, 3, 8, 9, 7, 1, 2, 3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    vector<int> c;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            c.push_back(arr[i]);
        }
    }

    for (auto i : c)
    {
        cout << i << " ";
    }
    return 0;
}