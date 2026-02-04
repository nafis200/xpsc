#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 3] = {0};
        int cnt = 0;
        set<int>st;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = n; i >= 1; i--){
            if(st.find(a[i]) != st.end()){
                 cnt = i;
                 break;
            }
            st.insert(a[i]);
        }
        cout << cnt << "\n";

    }
}