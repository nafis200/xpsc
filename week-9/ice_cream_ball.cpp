#include <bits/stdc++.h>
using namespace std;
long long n;

bool ok(long long x)
{
    long long val = x * (x - 1) / 2;
    return val <= n;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long l = 1, r = 1500000000, mid = 0, ans = 0;

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans + (n - (ans * (ans - 1)) / 2 ) << "\n"; 
    }
}
