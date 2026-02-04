#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        num ^= a[i];
    }
    int mn = num;
    for (int i = 1; i <= n; i++)
    {
        int removal_xor = num ^ a[i];
        mn = min(mn, removal_xor);
    }
    cout << mn << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}