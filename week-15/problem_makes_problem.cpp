#include <bits/stdc++.h>
using namespace std;

const int N = 2e6 + 5;
const long long mod = 1000000007;

long long fact[N], invfact[N];
int cnt = 1;

long long bigMod(long long a, long long b) {
    long long res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % mod * invfact[n - r] % mod;
}

void solve() {
    int n, r;
    cin >> n >> r;
    cout << "Case " << cnt++ << ": " << nCr(n + r - 1, r - 1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    fact[0] = 1;
    for (int i = 1; i < N; i++)
        fact[i] = fact[i - 1] * i % mod;

    invfact[N - 1] = bigMod(fact[N - 1], mod - 2);
    for (int i = N - 2; i >= 0; i--)
        invfact[i] = invfact[i + 1] * (i + 1) % mod;

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}