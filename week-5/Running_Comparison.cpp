#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 1], b[n + 1];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int mn = min(a[i],b[i]);
            int mx = max(a[i],b[i]);
            double x = (double) mx / mn;
            if(ceil(x) <= 2.0){
                ans++;
            }
        }
        cout << ans << "\n";

    }   
}

// 