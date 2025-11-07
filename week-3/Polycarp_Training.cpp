#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    set<long long>st;
    for(long long i = 1; i <= n; i++){
        long long x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << "\n";
    
}


