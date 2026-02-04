#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, x;
    cin >> n >> x;
    long long a[n + 2];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long money = 0;
    sort(a + 1, a + n + 1);
    long long cnt = 0;
    for (long long i = n; i >= 1; i--)
    {
        if (a[i] >= x)
        {
            cnt++;
            money += a[i] - x;
        }
        else
        {
            if (a[i] + money >= x)
            {
                cnt++;
                money -= (x - a[i]);
            }
        }
    }
    cout << cnt << "\n";
}

int32_t main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}