// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     long long k;
//     cin >> n >> m >> k;

//     vector<long long> a(n), b(m);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < m; i++) cin >> b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     int cnt = 0;
//     int j = 0; 

//     for (int i = 0; i < n; i++) {
//         long long low = a[i] - k;  
//         long long high = a[i] + k; 

   
//         j = lower_bound(b.begin() + j, b.end(), low) - b.begin();

//         if (j < m && b[j] <= high) {
//             cnt++;
//             j++;
//         }
//     }

//     cout << cnt << "\n";
// }


