#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n + 2];
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            ok = true;
        }
    }
    if(ok){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
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