#include <bits/stdc++.h>
using namespace std;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long n;
  cin >> n;
  long long ans = 1;
  long long nut = -1;
  for (long long i = 1; i <= n; i++) {
    long long x;
    cin >> x;
    if (x == 1) {
      if (nut != -1) {
        ans *= 1LL * (i - nut);
      }
      nut = i;
    }
  }
  if (nut == -1) {
    cout << 0 << "\n";
  } else {
    cout << ans << "\n";
  }
}