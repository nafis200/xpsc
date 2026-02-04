#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, op;
    cin >> n >> op;
    long long a[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long l = 1, r = 1e12;
    long long ans = 0;
    long long mid = 0;
    long long midelement = (n + 1) / 2;
    sort(a + 1, a + n + 1);

    while (l <= r)
    {
        mid = (l + r) / 2;
        long long mx_op = 0;
        for (long long i = midelement; i <= n; i++)
        {
            if(mid > a[i]){
                mx_op += mid - a[i];
            }
        }
        if (mx_op > op)
        {
            r = mid - 1;
        }
        else
        {
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans << "\n";
}