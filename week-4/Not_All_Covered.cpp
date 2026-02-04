#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k, q;
    cin >> n >> q;

    vector<long long> a(q + 1), b(q + 1);

    for (long long i = 1; i <= q; i++)
    {
        cin >> a[i] >> b[i];
    }
    long long range[n + 3] = {0};
    for (long long i = 1; i <= q; i++)
    {
        range[a[i]]++;
        range[b[i] + 1]--;
    }
    long long mx = n;
    for (long long i = 1; i <= n; i++)
    {
        range[i] += range[i - 1];
    }
    long long mn = 1e16;
    for (long long i = 1; i <= mx; i++)
    {
        mn = min(mn, range[i]);
    }
    cout << mn << "\n";
}
