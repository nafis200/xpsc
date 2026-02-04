#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        auto it = st.upper_bound(x);
        if(it == st.begin()){
            cout << -1 << "\n";
            continue;
        }
        it--;
        cout << *it << "\n";
        st.erase(it);
    }
}