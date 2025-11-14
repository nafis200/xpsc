#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// ab
int32_t main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long ans = 0;
        long long n;
        cin >> n;
        long long a[n + 2];
        for (long long i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        o_set<long long> st;
        for (long long i = n; i >= 1; i--)
        {
            auto it = st.order_of_key(a[i]);
            ans += it;
            st.insert(a[i]);
        }
        cout << ans << "\n";
    }
}