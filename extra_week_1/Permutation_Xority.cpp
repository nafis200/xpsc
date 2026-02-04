#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 2){
            cout << -1 << "\n";
            continue;
        }
        if(n % 2 == 1){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            cout << "\n";
        }
        if(n % 2 == 0){
            for(int i = 1; i <= n - 3; i++){
                cout << i << " ";
            }
            cout << n << " " << n - 2 << " " << n - 1 << "\n";
        }
    }
}