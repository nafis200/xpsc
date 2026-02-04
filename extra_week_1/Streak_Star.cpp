#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int mx = 1;
    int cnt = 1;

    for (int j = 2; j <= n; j++)
    {
        int original = a[j];
        a[j] = a[j] * x;
        cnt = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            mx = max(mx, cnt);
        }
        a[j] = original;
    }

    cout << mx << "\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}