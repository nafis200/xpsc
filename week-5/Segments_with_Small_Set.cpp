#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    long long l = 0, r = 0;
    long long a[n + 1];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = 0;
    map<long long, long long> mp;

    while (r < n)
    {
        mp[a[r]]++;
        if (mp.size() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (mp.size() > k)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    mp.erase(a[l]);
                }
                l++;
            }
            ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << "\n";
}