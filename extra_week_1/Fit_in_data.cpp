#include <bits/stdc++.h>
using namespace std;
void solve(){
    int mod, num;
    cin >> mod >> num;
    mod++;
    cout << num % mod <<  "\n";
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