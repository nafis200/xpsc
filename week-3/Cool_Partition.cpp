#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define sz(yo) (ll)yo.size()

void solve() {
   ll n;
   cin >> n;
   vector<ll> a(n);
   map<ll, set<ll>> mp;
   for (ll i = 0;i < n;i++) {
      cin >> a[i];
      mp[a[i]].insert(i);
   }

   ll ans = 1, idx = 0, prev = 1;
   vector<ll> v;
   while (idx < n) {
      bool ok = true;
      while (idx < prev) {
         v.push_back(idx);
         idx++;
      }
      for (auto pos : v) {
         auto it = mp[a[pos]].upper_bound(pos);
         if (it == mp[a[pos]].end()) {
            ok = false;
            break;
         }
         prev = max(prev, (*it) + 1);
      }
      if (ok) {
         ans++;
      }
      else {
         break;
      }
      v.clear();
   }
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll t;
   t = 1;
   cin >> t;
   for (ll cs = 1; cs <= t; cs++) {
      solve();
   }
   return 0;
}