#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, s;
    cin >> n >> s;
    long long a[n + 1];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0, cnt = 0, mn = 1e17;
    int l = 0, r = 0;
    while (r < n)
    {

        sum += a[r];
        cnt++;
        if (sum >= s)
        {
            mn = min(mn, cnt);
            while (sum >= s)
            {
                sum -= a[l];
                l++;
                cnt--;
                if (sum >= s)
                {
                    mn = min(mn, cnt);
                }
            }
        }

        r++;
    }

    while (sum >= s && l < n)
    {
        sum -= a[l];
        l++;
        cnt--;
        if (sum >= s)
        {
            mn = min(mn, cnt);
        }
    }
    if (mn == 1e17)
    {
        cout << -1 << "\n";
        return 0;
    }
    cout << mn << "\n";
}