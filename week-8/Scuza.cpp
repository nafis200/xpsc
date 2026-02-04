#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n + 1), pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i++){
        a[i] = max(a[i],a[i - 1]);
    }
    while(q--){
        long long x; cin >> x;
        auto it = upper_bound(a.begin(),a.end(), x) - a.begin();

        it--;
        cout << pref[it] << " ";
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