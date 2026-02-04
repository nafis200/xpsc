#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<long long> v(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long cost = 0;
    long long mid = (1 + n) / 2;
    long long k = v[mid];
    
    for(long long i = 1; i <= n; i++){
        cost += abs(k - v[i]);
    }
    
    cout << cost << "\n";
}