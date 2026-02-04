#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>st;
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        if(st.find(s) == st.end()){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
        st.insert(s);
    }   
}