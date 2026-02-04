#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int ans = 0;
    if(n % 2){
        ans = n / 2 + 1;
    }
    else{
        ans = n / 2;
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
}