// 3 8 4 5 6
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    multiset<int>st;
    vector<int>towers;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        auto it = st.upper_bound(x);
        if(it == st.end()){
            st.insert(x);
        }
        else{
            st.erase(it);
            st.insert(x);
        }
    }
    cout << st.size() << "\n";
    
}