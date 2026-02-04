#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    vector<ll> pref(n + 5, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end(), greater<ll>());

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    while (q--)
    {
        ll x;
        cin >> x;
        ll ans = -1;
        ll l = 1, r = n;
        ll mid = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (pref[mid] >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
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