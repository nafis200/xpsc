#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5 + 9;
long long a[N];
void solve()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long pref[100] = {0};

    for(long long i = 1; i <= n; i++){
        long long x = __lg(a[i]);
        pref[x]++;
    }
    long long sum = 0;
    for(long long i = 0; i < 50; i++){
        long long x = pref[i];
        sum += (1LL * x * (x - 1)) / 2;
    }
    cout << sum << "\n";
}
// 

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