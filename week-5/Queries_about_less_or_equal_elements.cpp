#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using o_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    o_set<pair<int,int>> st; 
    o_multiset<int>mul;

    int n, m;
    cin >> n >> m;

    int a[n + 1], b[m + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        st.insert({a[i], i});
    }

    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }

    for (int i = 1; i <= m; i++) {
        int ans = st.order_of_key({b[i], INT_MAX}); 
        cout << ans << " ";
    }
}
