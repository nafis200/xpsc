#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long n, l, r;
    cin >> n >> l >> r;
    vector<long long> v(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    long long cnt = 0;
    sort(v.begin(), v.end());
    for (long long i = 1; i < n; i++)
    {
        long long mn = l - v[i];
        long long mx = r - v[i];
        long long j = lower_bound(v.begin() + i + 1, v.end(), mn) - v.begin();
        long long k = upper_bound(v.begin() + i + 1, v.end(), mx) - v.begin();
        cnt += k - j;
    }
    cout << cnt << "\n";
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
        solve();
    }
}