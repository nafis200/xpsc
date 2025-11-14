#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long  n, k;
    cin >> n >> k;
    long long  a[n + 1];
    for (long long  i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long  l = 0, r = 0, sum = 0, ans = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= k && l < n)
        {
            ans += (n - r);
            sum -= a[l];
            l++;
        }

        r++;
    }
    cout << ans << "\n";
}