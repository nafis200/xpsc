#include <bits/stdc++.h>
using namespace std;
void solve(){
    int l,r;
    cin >> l >> r;
    int x = r / 2;
    if(x < l){
        cout << -1 << " " << -1 << "\n";
        return;
    }
    cout << x << " " << x * 2 << "\n";
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