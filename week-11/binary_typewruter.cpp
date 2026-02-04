#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    if(s[0] == '1'){
        cnt++;
    }
    for(int i = 1; i < n; i++){
        if(s[i] != s[i - 1]){
            cnt++;
        }
    }
    if(cnt == 2){
        cnt--;
    }
    else if(cnt >= 3){
        cnt -= 2;
    }
    cout << (cnt + n) << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

// 010