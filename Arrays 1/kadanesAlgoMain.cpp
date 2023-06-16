#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ansStart = -1, arrEnd = -1;

    long long sum = 0, maxi = LONG_MIN;

    int start;

    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            arrEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    if (maxi < 0)
    {
        maxi = 0;
    }

    for (int i = ansStart; i <= arrEnd; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << maxi;

    return 0;
}