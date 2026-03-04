#include <bits/stdc++.h>
using namespace std;
int n, k;
int lcm(vector<int>& v) {
  int ans = v[0];
  for (int i = 1; i < v.size(); i++) {
    ans = ans * v[i] / __gcd(ans, v[i]);
  }
  return ans;
}

int interset(vector<int>& v){
    return n / lcm(v);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> k;
  // 1 2 3 4 5 6

  // 2 and 3 diye vag jay na rirokom number

  // n(A U B) = n(A) + n(B) - n(A ^ B);
  // n(A U B) = 3 + 2 - 1
  //  4
  //  6 - 4 = 2
  int a[n + 5];
  for (int i = 1; i <= k; i++) {
    cin >> a[i];
  }
  int sub = 0;

  for (int mask = 1; mask < (1 << k); mask++) {
    vector<int> v;
    for (int i = 0; i < k; i++) {
      int bitmask = mask >> i;
      if (bitmask & 1) {
        v.push_back(a[i]);
      }
    }
    if (v.size() % 2) {
        sub += interset(v);
    } else {
        sub -= interset(v);
    }
  }
  cout << n - sub << "\n";
}