#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[1000] = {0};
    set<int>st;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        int num = 0;

        for (char c : s)
        {
            num = num * 2 + (c - '0');
        }
        st.insert(num);
    }
    bool ok = true;
    for(int i = 0; i < k; i++){
        int po = pow(2, i);
        if(st.find(po) == st.end()){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    
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