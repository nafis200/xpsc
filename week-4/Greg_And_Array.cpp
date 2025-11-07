#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, m, k;
    cin >> n >> m >> k;
    long long a[n + 2];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<pair<pair<long long, long long>, long long>> v;
    v.push_back({{0, 0}, 0});
    for (long long i = 1; i <= m; i++)
    {
        long long l, r, d;
        cin >> l >> r >> d;
        v.push_back({{l, r}, d});
    }
    long long pref[m + 2] = {0};
    for (long long i = 1; i <= k; i++)
    {
        long long x, y;
        cin >> x >> y;
        pref[x] += 1;
        pref[y + 1] -= 1;
    }

    for (long long i = 1; i <= m; i++)
    {
        pref[i] += pref[i - 1];
    }
    long long increase[n + 2] = {0};
    for (long long i = 1; i <= m; i++)
    {
        increase[v[i].first.first] += v[i].second * pref[i];
        increase[v[i].first.second + 1] -= v[i].second * pref[i];
    }

    for (long long i = 1; i <= n; i++)
    {
        increase[i] += increase[i - 1];
    }

    for (long long i = 1; i <= n; i++)
    {
        a[i] += increase[i];
    }

    for (long long i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

}