/*
Merge two sorted array with using any extra space -->
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 4, 8, 10}, arr2 = {2, 3, 9};
    vector<int> arr3;

    int n1 = arr1.size(), n2 = arr2.size();

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n1)
    {
        arr3.push_back(arr1[i++]);
    }

    while (j < n2)
    {
        arr3.push_back(arr2[j++]);
    }

    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    int n3 = (n1 + n2);
    arr1.clear();
    arr2.clear();

    for (int i = 0; i < n3; i++)
    {
        if (i < n1)
            arr1.push_back(arr3[i]);
        else
            arr2.push_back(arr3[i]);
    }
    cout << endl;
    for (int i = 0; i < n1 ; i++)
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