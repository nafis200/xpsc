#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long a[n + 1], b[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);

    for(long long i = 1; i <= n; i++){
        a[i] = a[i] % k;
    }
    for(long long i = 1; i <= n; i++){
        b[i] = b[i] % k;
    }

    long long cnt = 0;
    map<long long,long long>mp;
    for(long long i = 1; i <= n; i++){
        mp[a[i]]++;
    }
    for(long long i = 1; i <= n; i++){
        long long x = (k - b[i]) % k;
        if(mp.find(x) != mp.end()){
            cnt += mp[x];
        }
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