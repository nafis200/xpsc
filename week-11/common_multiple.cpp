#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n + 5];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    set<int>st;
    for(int i = 1; i <= n; i++){
        st.insert(a[i]);
    }
    cout << st.size() << "\n";
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