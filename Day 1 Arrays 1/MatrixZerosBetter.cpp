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



int main()
{
    int arr[3][3]={{1,1,1}, {1,0,1}, {1,1,1}};

    cout<<"Before operation \n";
    printArray(arr);
    
    int row[3]={0};
    int col[3]={0};
    
    for(int i=0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(row[i] || col[j])
            {
                arr[i][j]=0;
            }
        }
    }

    cout<<"\nAfter operation \n";
    printArray(arr);
    
    return 0;
}