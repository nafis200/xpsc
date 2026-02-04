#include <bits/stdc++.h>
using namespace std;
const long long N = 2e5 + 9;
long long a[N];
long long n, x;

bool ok(long long height)
{
    long long weight = 0;
    for (long long i = 1; i <= n; i++)
    {
        weight += max(0LL, height - a[i]);
        if (weight > x)
        {
            return false;
        }
    }
    if (weight <= x)
    {
        return true;
    }
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (long long i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        long long l = 1, r = 1e17, mid = 0, ans = 0;
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
        cout << ans << "\n";
    }
}