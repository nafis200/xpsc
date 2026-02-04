#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> A, B;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') A.push_back(i + 1);
            else B.push_back(i + 1);
        }

        bool aliceWins = false;

        for (int a : A) {
            bool bobCanBeat = false;

            for (int b : B) {
                if ((b > a && !(a == 1 && b == n)) ||
                    (b == 1 && a == n)) {
                    bobCanBeat = true;
                    break;
                }
            }

            if (!bobCanBeat) {
                aliceWins = true;
                break;
            }
        }

        cout << (aliceWins ? "Alice\n" : "Bob\n");
    }
    return 0;
}
