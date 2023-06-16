#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 3, 5, 7}, arr2 = {0, 2, 6, 8, 9};

    int n1 = arr1.size(), n2 = arr2.size();

    int i = n1 - 1, j = 0;

    while (i >= 0 && j < n2)
    {
        if (arr1[i] >= arr2[j])
        {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(), arr2.end());

    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}