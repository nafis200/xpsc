#include <bits/stdc++.h>
#define pb emplace_back
#define fst first
#define scd second
#define mkp make_pair
#define mems(a, x) memset((a), (x), sizeof(a))

using namespace std;
typedef long long ll;
typedef double db;
typedef unsigned long long ull;
typedef long double ldb;
typedef pair<ll, ll> pii;

void solve() {
	ll n, m;
	scanf("%lld%lld", &n, &m);
	ll ans = 0;
	for (int i = 0; i <= 30; ++i) {
		ll x = n & ((1LL << (i + 1)) - 1);
		ll t = (1LL << i) - x;
		if (n >= (1LL << i)) {
			t = min(t, x + 1);
		}
		if (x >= (1LL << i) || t <= m) {
			ans |= (1LL << i);
		}
	}
	printf("%lld\n", ans);
}

int main() {
	int T = 1;
	scanf("%d", &T);
	while (T--) {
		solve();
	}
	return 0;
}