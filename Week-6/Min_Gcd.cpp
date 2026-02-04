#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    map<long long, long long> mp;
    long long mn = 1e18;
    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        mp[x]++;
        mn = min(mn, x);
    }
 
    long long cnt = 0;
    long long g = 0;
    for (auto it : mp)
    {
        if (it.first == mn)
        {
            cnt += it.second;
            continue;
        }
        else if (it.first % mn == 0)
        {
            g = __gcd(g,it.first);
        }
    }
    if(g == mn || cnt > 1){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
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