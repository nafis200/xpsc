#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int mx = 0;
        for(int i = 2; i <= k; i++){
            mx = max(mx, n % i);
        }
        cout << mx << "\n";
    }
}