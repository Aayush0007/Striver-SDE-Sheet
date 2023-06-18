#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> setZeros(vector<vector<int>> &arr,int n,int m)
{
    vector<int> row(n,0);
    vector<int> col(n,0);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i] || col[j])
            {
                arr[i][j]=0;
            }
        }
    }

    return arr;
    
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    
    int n=matrix.size();
    int m=matrix[0].size();

    vector<vector<int>> ans = setZeros(matrix, n, m);
    for(auto i : ans)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}