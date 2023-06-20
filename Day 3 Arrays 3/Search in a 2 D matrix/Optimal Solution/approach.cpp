#include<bits/stdc++.h>
using namespace std;

bool searchBinary(int arr[3][4],int n,int m,int target)
{
    int low=0;
    int high = m-1;
    while(low<=high)
    {
        int middle= (low+high)/2;
        if(arr[middle/m][middle%m]<target)
        {
            high=middle-1;
        }
        if(arr[middle/m][middle%m]>target)
        {
            low = middle+1;
        }
        if(arr[middle/m][middle%m]==target)
        {
            return true;
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
    bool ans = searchBinary(arr, 3, 4, target);
    if (ans == true)
        cout << "True";
    else
        cout << "False";


   return 0;
}