#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
const int mod = 1e6 + 3;
int rfac[N + 2];
int ffac[N + 2];
int cnt = 1;

int bigMod(int a, int b) {
  a = a % mod;
  int res = 1;
  while (b > 0) {
    if (b % 2 == 1) {
      res = (1LL * res * a) % mod;
    }
    a = (1LL * a * a) % mod;
    b = b / 2;
  }
  return res;
}

void solve() {
  int n, r;
  cin >> n >> r;

  int ans = (1LL * ffac[n] * rfac[r] % mod * rfac[n - r] % mod) % mod;
  cout << "Case " << cnt << ": ";
  cout << ans << "\n";
  cnt++;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  memset(rfac, 0, sizeof(rfac));

  ffac[0] = 1;

  for (int i = 1; i < N; i++) {
    ffac[i] = (1LL * ffac[i - 1] * i) % mod;
  }

  rfac[N - 1] = bigMod(ffac[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    rfac[i] = (1LL * rfac[i + 1] * (i + 1)) % mod;
  }

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}