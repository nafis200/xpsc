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
        long long k, n;
        cin >> k >> n;
        long long a[n + 2];
        for (long long i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1, greater<long long>());
        long long ans = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (sum >= a[i])
            {
                break;
            }
            ans++;
            sum += k - a[i];
        }
        cout << ans << "\n";
    }
}