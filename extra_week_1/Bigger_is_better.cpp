#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        for (auto it : s)
        {
            st.insert(it);
        }
        if(st.size() == 1 && *st.begin() == 'z'){
            cout << -1 << "\n";
        }
        else{
            for(int i = 0; i < n; i++){
                cout << 'z';
            }
            cout << "\n";
        }
    }
}