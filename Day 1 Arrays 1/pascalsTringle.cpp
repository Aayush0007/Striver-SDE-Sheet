#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int res=1;
    for (int i = 1; i <= n; i++)
    {
        res=res*i;
    }
    return res;
}
int main()
{
   int n;
   cout<<"Enter the number : ";
   cin>>n;

   for(int i=0;i<n;i++)
   {
    for (int j = 0; j <= i; j++)
    {
        cout<<(factorial(i))/(factorial(i-j)*factorial(j))<<" ";
    }
    cout<<endl;
   }
   


   return 0;
}