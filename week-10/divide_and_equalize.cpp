#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        // 
        int x;
        cin >> x;
        for (int j = 2; j * j <= x; j++)
        {
            int cnt = 0;
            while (x % j == 0)
            {
                cnt++;
                x = x / j;
            }
            if (cnt > 0)
            {
                mp[j] += cnt;
            }
        }
        if (x > 1)
        {
            mp[x] += 1;
        }
    }
    for (auto it : mp)
    {
        if (it.second % n != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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