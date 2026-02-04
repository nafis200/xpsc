#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long a[n + 2];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long mx = 0;
    long long l = 1, r = 1;
    map<long long, long long> mp;
    while (r <= n)
    {
        if (mp.find(a[r]) != mp.end() && mp[a[r]] >= l)
        {
            l = mp[a[r]] + 1;
        }
        mp[a[r]] = r;
        mx = max(mx, r - l + 1);
        r++;
    }
    cout << mx << "\n";
}

