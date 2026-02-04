#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    sort(a.begin() + 1, a.begin() + n + 1);

    vector<long long> b;
    for (long long i = 1; i <= n; i++)
    {
        b.push_back(a[i]);
    }

    long long g = 0;
    for (long long i = n; i >= 2; i--)
    {
        g = __gcd(g, a[i] - a[i - 1]);
    }

    bool ok = false;
    long long num = a[n] - g;

    for (long long i = n - 1; i >= 1; i--)
    {   
        if (num != a[i])
        {
            ok = true;
            break;
        }

        num = num - g;
    }
    long long last_num = 0;

    b.push_back(num);

    sort(b.begin(), b.end());

    last_num = b.back();

    if (g == 0)
    {
        g = 1;
    }
    long long ans = 0;
    for (auto it : b)
    {
        ans = ans + ((last_num - it) / g);
    }

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