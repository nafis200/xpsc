#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int max_v = 1005;
    int n;
    cin >> n;
    vector<int> v(max_v);
    int mx = -5;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x] = i;
        mx = max(mx, x);
    }

    int ans = 0;
    for (int i = 1; i <= mx; i++)
    {
        for (int j = i; j <= mx; j++)
        {
            if (v[i] && v[j] &&  __gcd(i, j) == 1)
            {
                ans = max(ans, v[i] + v[j]);
            }
        }
    }
    if(ans == 0){
        cout << -1 << "\n";
        return;
    }

    cout << ans << "\n";
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