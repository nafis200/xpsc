#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> b(m);
    for (int &x : b) cin >> x;
    sort(b.begin(), b.end());

    while (q--) {
        int x;
        cin >> x;

        int p = lower_bound(b.begin(), b.end(), x) - b.begin();

        if (p == 0) {
            cout << b[0] - 1 << '\n';
        } 
        else if (p == b.size()) {
            cout << n - b.back() << '\n';
        } 
        else {
            cout << (b[p] - b[p - 1]) / 2 << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
