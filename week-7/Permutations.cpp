#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n != 1 && n <= 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    for (long long i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    for (long long i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}