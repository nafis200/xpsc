#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        ll q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = 0;
        int len = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                len++;
            }
            else
            {
                if (len >= k)
                {
                    ll blocks = (ll)(len - k + 1) * (len - k + 2) / 2;
                    ans += blocks;
                }
                len = 0;
            }
        }
        if (len >= k)
        {
            ll blocks = (ll)(len - k + 1) * (len - k + 2) / 2;
            ans += blocks;
        }

        cout << ans << "\n";
    }
    return 0;
}
