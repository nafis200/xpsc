#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    map<int, int> mp;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        st.insert(a[i]);
        st.insert(b[i]);
    }
    int c = 0;
    for (auto it : st)
    {
        mp[it] = ++c;
    }

    for (int i = 1; i <= n; i++)
    {
        a[i] = mp[a[i]];
        b[i] = mp[b[i]];
    }
    int pref[c + 5] = {0};
    for (int i = 1; i <= n; i++)
    {
        pref[a[i]]++;
        pref[b[i] + 1]--;
    }

    for (int i = 1; i <= c + 1; i++)
    {
        pref[i] += pref[i - 1];
    }
    int mx = 0;
    for (int i = 1; i <= c; i++)
    {
        mx = max(mx, pref[i]);
    }
    cout << mx << "\n";
}