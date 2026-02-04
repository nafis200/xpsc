#include <bits/stdc++.h>
using namespace std;
long long n, x, y;
long long ans;
long long remain;

bool ok(long long time)
{
    return (time / x + time / y >= remain);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> x >> y;
    long long time = min(x, y);
    ans = 0;
    remain = n - 1;
    long long l = 0, r = 1e17, mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << time + ans << "\n";
}