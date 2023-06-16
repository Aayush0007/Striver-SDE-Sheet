#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int profit = 0, maxi = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxi=min(maxi,arr[i]);
        profit = max(profit,  arr[i]-maxi) ;
    }

    cout << profit;

    return 0;
}