#include <bits/stdc++.h>
using namespace std;

long long k, n;
const long long N = 55;
long long a[N];

bool ok(long long council)
{
    long long sum = 0; 
    for (long long i = 1; i <= n; i++)
    {
        sum += min(a[i],council);
    }
    return sum >= 1LL * council * k;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long l = 0, r = 1e17, ans = 0;

    while (l <= r)
    {
        long long mid = (l + r) / 2;
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
