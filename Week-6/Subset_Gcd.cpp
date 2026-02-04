#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = n / k;
    int num = ans;
    for (int i = 1; i <= k; i++)
    {
        cout << num << " ";
        num += ans;
    }
    cout << "\n";
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
        solve();
    }
}
// 