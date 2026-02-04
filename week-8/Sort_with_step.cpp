#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int pos[n + 1] = {0};
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        pos[a[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        if (abs(pos[i] - i) % k != 0)
        {
            cnt++;
        }
    }

    if (cnt == 0)
    {
        cout << 0 << "\n";
    }
    else if (cnt == 2)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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