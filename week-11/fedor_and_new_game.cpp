#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 2];
    for (int i = 1; i <= m + 1; i++)
    {
        cin >> a[i];
    }

    int x = a[m + 1];
    int group = 0;
    for (int i = 1; i <= m; i++)
    {
        int diff = a[i] ^ x;
        if (__builtin_popcount(diff) <= k)
        {
            group++;
        }
    }
    cout << group << "\n";
    // 
}