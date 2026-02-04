#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// use set
template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    o_set<pair<int, int>> st;
    int l = 0, r = 0;
    vector<int> ans;
    while (r < n)
    {
        st.insert({a[r],r});
        if (r - l + 1 == k)
        {
            auto it = st.find_by_order((k - 1) / 2);
            ans.push_back(it->first);
            auto it1 = st.find({a[l],l});
            st.erase(it1);
            l++;
        }

        r++;
    }
    for(auto it : ans){
        cout << it << " ";
    }
}