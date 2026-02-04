#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n + 1];
    int ors = 0;
    int ands = 1023;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        ors |= x;
        ands &= x;
    }
    cout << ors - ands << "\n";
    // 

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