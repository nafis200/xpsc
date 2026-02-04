#include <bits/stdc++.h>
using namespace std;


long long prime_factor(long long x, long long y)
{
    while (x % y == 0)
    {
        x = x / y;
    }
    return x;
}

void solve()
{
    long long x, y, z;
    cin >> x >> y >> z;

    x++;
    z--;

    x = prime_factor(x, y);

    if (z == 0)
    {
        cout << x << "\n";
        return;
    }

    long long remain_operation = (x + z) % y;

    long long in_op = z - remain_operation;

    x += in_op;
    x = prime_factor(x, y);
    x += remain_operation;
    x = prime_factor(x, y);

    cout << x << "\n";
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