#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int min_sum = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        min_sum |= x;
    }
    cout << min_sum << "\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}