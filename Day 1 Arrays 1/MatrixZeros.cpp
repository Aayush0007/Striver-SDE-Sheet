#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void markRow(int arr[3][3], int i)
{
    for(int j=0;j<3;j++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}

void markCol(int arr[3][3], int j)
{
    for(int i=0;i<3;i++)
    {
        if(arr[i][j]!=0)
        {
            arr[i][j]=-1;
        }
    }
}

int main()
{
    int arr[3][3]={{1,1,1}, {1,0,1}, {1,1,1}};
    
    cout<<"Before operation \n";
    printArray(arr);
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                markRow(arr,i);
                markCol(arr,j);
            }
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==-1)
            {
                arr[i][j]=0;
            }
        }
    }
    
    cout<<"\nAfter operation \n";
    printArray(arr);
    
    return 0;
}