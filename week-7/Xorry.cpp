#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x; cin >> x;
    if(__builtin_popcount(x) == 1){
        cout << 0 << " " << x <<  "\n";
        return;
    }
    int big = __lg(x);
    int ans = pow(2, big);
    cout << x - ans << " " << ans << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
}