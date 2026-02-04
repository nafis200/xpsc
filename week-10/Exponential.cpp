#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int binary_exponential(int a, int b)
{
    int ans = 1;
    a %= mod;

    while (b > 0)
    {
        if (b & 1)
            ans = (1LL * ans * a) % mod;

        a = (1LL * a * a) % mod;
        b >>= 1;
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << binary_exponential(a, b) << "\n";
    }
}