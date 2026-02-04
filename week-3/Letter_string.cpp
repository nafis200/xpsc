#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        map<string,int> mask;
        map<string,int> full;

        for(auto s : v) {
            string m1 = "*" + string(1,s[1]);
            string m2 = string(1,s[0]) + "*";
            mask[m1]++;
            mask[m2]++;
            full[s]++;
        }

        long long ans = 0;
        for(auto p : mask) {
            long long c = p.second;
            ans += c * (c-1)/2;
        }

        for(auto p : full) {
            long long c = p.second;
            ans -= 2 * (c * (c-1)/2); 
        }

        cout << ans << "\n";
    }
}
