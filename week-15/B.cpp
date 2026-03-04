#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long ans = 0;
    long long M = N - 1;

    for (long long i = 1; i <= M; i++) {
        ans += M / i;
    }

    cout << ans << endl;
}