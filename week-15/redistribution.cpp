#include <bits/stdc++.h>
using namespace std;

const int N = 35;
long long fact[N], invfact[N];
const long long MOD = 1e18;

long long bigMod(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < N; i++) fact[i] = fact[i - 1] * i;
    for (int i = 0; i < N; i++) invfact[i] = 1;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] / (fact[r] * fact[n - r]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int T;
    cin >> T;
    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int n, k;
        cin >> n >> k;

        long long ans = 0;
        if (k <= n) {
            ans = (1LL * (1LL * nCr(n, k) * nCr(n, k)) % MOD * fact[k]) % MOD;
        }
        cout << "Case " << caseNum << ": " << ans << "\n";
    }
}