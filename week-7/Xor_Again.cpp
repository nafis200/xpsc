#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int xors = 0;
      for(int i = 1; i <= n; i++){
        xors ^= a[i] + a[i];
    }
    cout << xors << "\n";
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