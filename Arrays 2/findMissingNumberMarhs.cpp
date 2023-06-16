#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 1, 2, 5, 3};
    int n = v.size();

    long long sn = (n * (n + 1)) / 2;
    long long s2n = (n * (n + 1) * (2 * n + 1)) / 6;

    long long s = 0, s2 = 0;

    for (int i = 0; i < n; i++)
    {
        s += v[i];
        s2 += (v[i] * v[i]);
    }

    long long val1 = s - sn; //x-y
    long long val2 = s2 - s2n;

    val2 = val2/val1; //x+y
    long long x = (val1+val2)/2;
    long long y=x-val1;

    cout<<"repeted value: "<<x<<" Missing value: "<<y;
    return 0;
}