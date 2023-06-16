/*
This method is using hashing method 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 5, 9, 6, 9, 3, 8, 9, 7, 1, 2, 3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<bool> v(n, false);
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        if (!v[arr[i]])
        {
            c.push_back(arr[i]);
            v[arr[i]] = true;
        }
    }
    for (auto i : c)
    {
        cout << i << " ";
    }

    return 0;
}