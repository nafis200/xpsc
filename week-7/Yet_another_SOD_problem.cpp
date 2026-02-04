#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long L, R;
    cin >> L >> R;
    cout << R / 3 - (L  - 1)/ 3 << "\n";
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