#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
    int a[n + 1], b[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0, mx = 0, cnt = 0, sum = 0;

    while (r < n)
    {
        if (r == 0)
        {
            sum += a[r];
        }
        else if (b[r - 1] % b[r] == 0)
        {
            sum += a[r];
        }
        else
        {
            sum = a[r];
            l = r;
        }

        while (sum > s)
        {
            sum -= a[l];
            l++;
        }

        if (sum <= s)
        {
            cnt = (r - l + 1);
            mx = max(mx, cnt);
        }
        r++;
    }
    cout << mx << "\n";
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