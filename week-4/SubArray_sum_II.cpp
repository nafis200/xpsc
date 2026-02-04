#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long a[n + 1], pref[n + 2] = {0};
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (long long i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    long long ans = 0;
    map<long long, long long> mp;

    for (long long i = 0; i <= n; i++)
    {
        long long x = pref[i];
        long long y = x - k;
        if (mp.find(y) != mp.end())
        {
            ans += mp[y];
        }
        mp[x]++;
    }
    cout << ans << "\n";
}