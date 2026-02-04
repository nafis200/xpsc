#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
vector<ll> v;
bool binary_search(ll x)
{
    ll l = 0, r = n - 1;
    bool ok = false;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (v[mid] == x)
        {
            ok = true;
            l = mid + 1;
        }
        else if (v[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ok;
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
        if (binary_search(x))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}