// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;

// template <typename T>
// using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, k;
//     cin >> n >> k;
//     vector<long long> a(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     o_set<pair<long long, long long>> st;
//     for (int i = 1; i < k; i++)
//     {
//         st.insert({a[i], i});
//     }
//     for (int i = k; i <= n; i++)
//     {
//         long long ans = 0;
//         st.insert({a[i], i});
//         auto it = st.find_by_order(k / 2);
//         long long median = it->first;
//         for (auto v : st)
//         {
//             ans += abs(v.first - median);
//         }
//         cout << ans << " ";
//         st.erase(st.find({a[i - k + 1], {i - k + 1}}));
//     }
// }


#include <bits/stdc++.h>
using namespace std;

void rebalance(multiset<long long>& left, multiset<long long>& right, long long &sumLeft, long long &sumRight) {
    while (left.size() > right.size() + 1) {
        auto it = prev(left.end());
        sumLeft -= *it;
        sumRight += *it;
        right.insert(*it);
        left.erase(it);
    }
    while (right.size() > left.size()) {
        auto it = right.begin();
        sumRight -= *it;
        sumLeft += *it;
        left.insert(*it);
        right.erase(it);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    multiset<long long> left, right;
    long long sumLeft = 0, sumRight = 0;

    for (int i = 0; i < k; i++) {
        left.insert(a[i]);
        sumLeft += a[i];
    }
    rebalance(left, right, sumLeft, sumRight);

    for (int i = k; i <= n; i++) {
        long long median = *prev(left.end());
        long long cost = median * (long long)left.size() - sumLeft + sumRight - median * (long long)right.size();
        cout << cost << " ";

        if (i == n) break;

        long long outVal = a[i - k];
        long long inVal = a[i];

        if (left.find(outVal) != left.end()) {
            left.erase(left.find(outVal));
            sumLeft -= outVal;
        } else {
            right.erase(right.find(outVal));
            sumRight -= outVal;
        }

        if (!left.empty() && inVal <= *prev(left.end())) {
            left.insert(inVal);
            sumLeft += inVal;
        } else {
            right.insert(inVal);
            sumRight += inVal;
        }

        rebalance(left, right, sumLeft, sumRight);
    }

    cout << "\n";
}
