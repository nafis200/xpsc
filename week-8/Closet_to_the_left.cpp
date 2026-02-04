#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
vector<ll> v;
ll binary_search(ll x)
{
    ll l = 0, r = n - 1;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (v[mid] <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int32_t main()
{

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        ll ans = binary_search(x);
        cout << ans + 1 << "\n";
    }
}