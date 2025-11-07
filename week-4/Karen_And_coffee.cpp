#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, q;
    cin >> n >> k >> q;

    set<int> st;
    vector<int> a(n + 1), b(n + 1), c(q + 1), d(q + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        st.insert(a[i]);
        st.insert(b[i]);
    }

    for (int i = 1; i <= q; i++)
    {
        cin >> c[i] >> d[i];
        st.insert(c[i]);
        st.insert(d[i]);
    }

    int index = 1;
    map<int, int> mp;
    for (auto it : st)
    {
        mp[it] = index++;
    }

    for (int i = 1; i <= n; i++)
    {
        a[i] = mp[a[i]];
        b[i] = mp[b[i]];
    }
    // 

    for (int i = 1; i <= q; i++)
    {
        c[i] = mp[c[i]];
        d[i] = mp[d[i]];
    }

    int range[index + 3] = {0};
    for (int i = 1; i <= n; i++)
    {
        range[a[i]]++;
        range[b[i] + 1]--;
    }

    for (int i = 1; i <= index; i++)
    {
        range[i] += range[i - 1];
    }

    int pref[index + 2] = {0};

    for (int i = 1; i <= index; i++)
    {
        if (range[i] >= k)
        {
            pref[i]++;
        }
    }

    for (int i = 1; i <= index; i++)
    {
        pref[i] = pref[i] + pref[i - 1];
    }

    for(int i = 1; i <= q; i++){
        int ans = 0;
        ans = pref[d[i]] - pref[c[i] - 1];
        cout << ans << "\n";
    }

    // for (int i = 1; i <= q; i++)
    // {
    //     int ans = 0;
    //     for (int j = c[i]; j <= d[i]; j++)
    //     {
    //         if (range[j] >= k)
    //         {
    //             ans++;
    //         }
    //     }
    //     cout << ans << "\n";
    // }
}
