#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long l = 0, r = 1e18, mid = 0;
        long long ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            long long not_divisible = 0;
            not_divisible = mid - (mid / n);
            if (not_divisible >= k)
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