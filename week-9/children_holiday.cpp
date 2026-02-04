
// 9  3

//  t  y  z
//  2  4  2
//  1  2  3
//  3  1  1


// 1   0   1   0  =  1
// 2   1   2   0  =  3
// 3   1   2   1  =  4
// 4   2   2   1  =  5
// 5   2   2   1  =  5
// 6   3   3   1  =  7
// 7   3   4   2  =  9
// 8   4   4   2  =  10
// 9   4   4   2  =  10

// full seg = (t * y) + z;
// partial_time = available_time / t 

//   1 1 3

// time = 14  
// full segment = 3
// time available = 14 % 4 = 2
// available / 1  = min(1, 2) = 2

// while another Case
// 9  3
//  t  y  z
//  2  4  2
//  1  2  3
//  1  1  3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<int> t(n), z(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }


    auto canMake = [&](int T) {
        long long total = 0;
        for (int i = 0; i < n; i++) {
            int cycleTime = t[i] * z[i] + y[i];
            int fullCycles = T / cycleTime;
            int remTime = T % cycleTime;

            long long balloons = (long long)fullCycles * z[i];
            balloons += min(z[i], remTime / t[i]);

            total += balloons;
        }
        return total >= m;
    };
    int low = 0, high = 1e7, ansTime = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canMake(mid)) {
            ansTime = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    vector<int> result(n, 0);
    int remaining = m;

    for (int i = 0; i < n && remaining > 0; i++) {
        int cycleTime = t[i] * z[i] + y[i];
        int fullCycles = ansTime / cycleTime;
        int remTime = ansTime % cycleTime;

        int balloons = fullCycles * z[i];
        balloons += min(z[i], remTime / t[i]);

        result[i] = min(balloons, remaining);
        remaining -= result[i];
    }

    cout << ansTime << "\n";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}
