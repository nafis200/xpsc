#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n + 2];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = 0;
    ll pref[n + 2] = {0};
    ll suffix[n + 2] = {0};
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    for (int i = n; i >= 1; i--)
    {
        suffix[i] = suffix[i + 1] + a[i];
    }

    int l = 1, r = n;
    while (l <= r)
    {
        if (pref[l] == suffix[r])
        {
            ans = pref[l];
        }
        if (pref[l] < suffix[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    if (l <= r && pref[l] == suffix[r])
    {
        ans = pref[l];
    }

    cout << ans << "\n";
}

