#include<bits/stdc++.h>
using namespace std;

int NCR(int n, int r)
{
    long long res=1;
    for(int i=0;i<r;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

int main()
{
   int n;
   cout<<"Enter the number of rows: ";
   cin>>n;

   for(int i=0;i<n;i++)
   {
    for (int j = 0; j <= i; j++)
    {
        cout<<NCR(i,j)<<" ";
    }
    cout<<endl;
   }

   return 0;
}