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
    bool ok = false;
    int pos = 0;
    for (int i = 2; i <= n; i++)
    {
        if (a[1] < a[i])
        {
            pos = i;
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        cout << -1 << "\n";
        return;
    }
    cout << pos - 1 << "\n";
    for (int i = 1; i < pos; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    cout << (n - pos + 1) << "\n";
    for (int i = pos; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
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