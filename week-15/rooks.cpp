#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

void solve() {
    int n, k;
    cin >> n >> k;

    long long ans = 0;
    if (k <= n) {
        ans = nCr(n, k) * nCr(n, k) * factorial(k);
    }

    cout << "Case " << cnt << ": " << ans << "\n";
    cnt++;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}