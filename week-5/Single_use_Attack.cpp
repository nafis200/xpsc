#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int h,x,y;
        cin >> h >> x >> y;
        int ans = 1;
        h -= y;
        if(h > 0){
            ans += h / x;
            if(h % x != 0){
                ans++;
            }
        }
        cout << ans << "\n";
    }
}