#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long a[n + 2], b[n + 2];
    vector<long long> col;
    long long ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    for (long long i = 1; i <= n; i++)
    {
        ans += max(a[i], b[i]);
        long long mn = min(a[i],b[i]);
        col.push_back(mn);
    }
    sort(col.rbegin(),col.rend());

    for(long long i = 0; i < k - 1; i++){
            ans += col[i];
    }
    ans++;

    cout << ans << "\n";
    

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