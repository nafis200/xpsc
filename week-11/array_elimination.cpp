#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    bool ok = false;
    for(int i = 1; i <= n; i++){
           if(a[i] > 0){
              ok = true;
              break;
           }
    }
    // 
    if(!ok){
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    int pref[40] = {0};
    for (int i = 1; i <= n; i++)
    {
        for (int mask = 0; mask < 31; mask++)
        {
            if ((a[i] >> mask) & 1)
            {
                pref[mask]++;
            }
        }
    }
    int g = 0;
    for (int i = 0; i < 40; i++)
    {
        g = __gcd(g, pref[i]);
    }
    set<int> st;
    for (int i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            st.insert(g / i);
            st.insert(i);
        }
    }
    for(auto it : st){
        cout << it << " ";
    }
    cout << "\n";
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