#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        set<int>st;
        for(int i = 1; i <= m; i++){
             int x; cin >> x;
             --x;
             st.insert(x);
        }
        string c;
        cin >> c;
        sort(c.begin(),c.end());
        int i = 0;
        for(auto it : st){
            a[it] = c[i];
            i++;
        }
        cout << a << "\n";
    }
}