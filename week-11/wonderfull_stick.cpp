#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s;
    cin >> s;
    int l = 1, r = n;
    vector<int>ans(n, 0);
    for(int i = 0; i < n - 1; i++){
         if(s[i] == '<'){
            ans[i] = r;
            r--;
         }
         else{
            ans[i] = l;
            l++;
         }
         ans[n - 1] = r;
    }
    for(auto it : ans){
        cout << it << " ";
    }
    cout << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    // 
}