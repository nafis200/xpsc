#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
long long a[N];
long long n;
long long first(long long x)
{
    long long l = 1, r = n, ans = n + 1;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return ans;
}

long long last(long long x)
{
    long long l = 1, r = n, ans = 0;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}


int32_t main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int q;
    cin >> q;
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        long long ans = first(l);
        long long ans1 = last(r);
        cout << (ans1 - ans + 1) << " ";
    }
}


