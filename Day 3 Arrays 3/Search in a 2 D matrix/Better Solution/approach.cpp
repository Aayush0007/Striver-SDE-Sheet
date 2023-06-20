#include <bits/stdc++.h>
using namespace std;
bool search(int arr[3][4], int n, int m, int target)
{
    int i=0, j=m-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==target)
        {
            return true;
        }
        if(arr[i][j]>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    int arr[3][4] = {{1, 3, 5, 7},
                     {10, 11, 16, 20},
                     {23, 30, 34, 60}};

    int target = 3;
    bool ans = search(arr, 3, 4, target);
    if (ans == true)
        cout << "True";
    else
        cout << "False";

    return 0;
}