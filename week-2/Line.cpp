#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; 
        cin >> s;
        vector<ll>increase;
        ll sum = 0;
        ll change = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
                sum += i;
                change = max(0LL,n - 2*i - 1);
            }
            else{
                sum += (n - i - 1);
                change = max(0LL,2 * i - n + 1);
                
            }
            increase.push_back(change);
        }
        sort(increase.begin(),increase.end());
        reverse(increase.begin(),increase.end());

        for(auto it : increase){
            sum += it;
            cout << sum << " ";
        }
        cout << "\n";

    }
}