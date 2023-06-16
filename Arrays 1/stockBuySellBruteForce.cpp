#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int profit, maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        profit=0;
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]<arr[j])
            {
                profit=arr[j]-arr[i];
            }
                maxi=max(maxi, profit);
        }
    }

    cout<<maxi<<endl;

    return 0;
}