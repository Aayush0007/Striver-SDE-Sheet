#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 1, 2, 5, 3};
    int n = v.size(), rept, miss;

    vector<bool> vis(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!vis[v[i]])
        {
            vis[v[i]] = true;
        }
        else
        {
            rept = v[i];
        }
    }

    for (int i = 1; i <= n; i++)
        if (!vis[i])
            miss = i;

    cout << "repeated number : " << rept << " Missing number : "
         << " " << miss;
    return 0;
}