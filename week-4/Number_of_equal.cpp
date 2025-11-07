#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n + 1], b[m + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll cnt = 0, cnt1 = 0;
    ll current = a[0];
    ll l = 0, r = 0;
    ll ans = 0;
    while (l < n && r < m)
    {
        while (l < n && a[l] == current)
        {
            cnt++;
            l++;
        }
        while (r < m && current > b[r])
        {
            r++;
        }
        while (r < m && b[r] == current)
        {
            cnt1++;
            r++;
        }

        current = a[l];
        ans += (cnt * cnt1);

        cnt = 0;
        cnt1 = 0;
    }
    cout << ans << "\n";
}