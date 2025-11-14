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
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> a;
        for (long long i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long ans = 0;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            sum += a[i];
        }

        long long L = sum - y;
        long long R = sum - x;

        for (long long i = 0; i < n; i++)
        {
            auto it = lower_bound(a.begin() + i + 1, a.end(), L - a[i]);

            auto it1 = upper_bound(a.begin() + i + 1, a.end(), R - a[i]);

            ans += (it1 - it);
        }
        cout << ans << "\n";
    }
}