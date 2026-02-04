#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }
    if (total == s)
    {
        cout << 0 << "\n";
        return;
    }
    if (total < s)
    {
        cout << -1 << "\n";
        return;
    }
    int l = 0, r = 0, sum = 0, mx = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum == s)
        {
            mx = max(mx, (r - l + 1));
        }
        while (sum > s)
        {
            sum -= a[l];
            l++;
            if (sum == s)
            {
                mx = max(mx, (r - l + 1));
            }
        }

        r++;
    }
    cout << n - mx << "\n";
    return;
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