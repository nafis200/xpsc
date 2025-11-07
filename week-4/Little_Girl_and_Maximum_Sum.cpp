#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q;
    cin >> n >> q;
    ll a[n + 1];
    ll pref[n + 5] = {0};
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        pref[l] += 1;
        pref[r + 1] -= 1;
    }

    for (ll i = 1; i < n; i++)
    {
        pref[i] = pref[i] + pref[i - 1];
    }

    sort(pref, pref + n);
    sort(a, a + n);

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += 1LL * (a[i] * pref[i]);
    }

    cout << ans << "\n";
}