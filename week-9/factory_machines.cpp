#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, t;
    cin >> n >> t;
    long long a[n + 2];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long ans = 0;
    long long l = 1, r = 1e18;
    long long mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        long long products = 0;
        for (long long i = 1; i <= n; i++)
        {
            products += (mid / a[i]);
            if (products >= t)
            {
                break;
            }
        }
        if (products >= t)
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