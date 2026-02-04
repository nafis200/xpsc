#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<int> st;
    int l = 0, r = 0;
    int mx = 0, mn = 1e9;
    int ans = 0;

    while (r < n)
    {
        st.insert(a[r]);
        auto it = st.end();
        it--;
        mx = *it;

        auto it1 = st.begin();
        mn = *it1;

        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (mx - mn > k)
            {
                st.erase(st.find(a[l]));
                l++;

                it = st.end();
                it--;
                mx = *it;

                it1 = st.begin();
                mn = *it1;
            }
            ans += (r - l + 1);
        }

        r++;
    }

    cout << ans << "\n";
}
