#include <bits/stdc++.h>
using namespace std;

const int N = 1009;
int t[N], y[N], z[N];
int m, n;

bool ok(int time)
{
    long long ballon = 0;
    for (int i = 1; i <= n; i++)
    {
        int cycle = t[i] * z[i] + y[i];
        int full_seg = time / cycle;
        int partial_seg = time % cycle;

        ballon += full_seg * z[i];
        ballon += min(z[i], partial_seg / t[i]);
    }
    return ballon >= m;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> z[i] >> y[i];
    }

    int l = 0, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << "\n";

    int remain = m;
    vector<int> v(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int cycle = t[i] * z[i] + y[i];
        int full_seg = ans / cycle;
        int partial_seg = ans % cycle;

        int ballon = full_seg * z[i] + min(z[i], partial_seg / t[i]);
        ballon = min(ballon, remain);

        v[i] = ballon;
        remain -= ballon;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
