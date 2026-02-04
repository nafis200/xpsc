#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int g = __gcd(a, b);
    if (g == b)
    {
        cout << -1 << "\n";
        return;
    }
    int ans = a;
    while(ans < n){
        ans += a;
    }
    while(ans % b == 0){
        ans += a;
    }
    cout << ans << "\n";
}
int main()
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
