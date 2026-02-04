#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, b;
    cin >> n >> b;
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (z <= b)
        {
            mx = max(mx, x * y);
        }
    }
    if(mx == 0){
        cout << "no tablet\n";
        return;
    }
    cout << mx << "\n";
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}