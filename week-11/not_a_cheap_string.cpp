#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int p; cin >> p;
    int sum = 0;
    int freq[27] = {0};
    for(int i = 0; i < (int)s.size(); i++){
         sum += s[i] - 96;
         freq[s[i] - 96]++;
    }

    for(int i = 26; i >= 1; i--){
        while(sum > p && freq[i] > 0){
            sum -= i;
            freq[i]--;
        }
    }

    for(auto ch : s){
        if(freq[ch - 96]){
            cout << ch;
            freq[ch-96]--;
        }
    }
    cout << "\n";
    
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