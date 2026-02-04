#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long a[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long g = 0;
    long long mx = -1450;
    for(long long i = 1; i <= n; i++){
        mx = max(mx,a[i]);
    }
    for(long long i = 1; i <= n; i++){
        g = __gcd(g,mx - a[i]);
    }
    long long people = 0;
    for(long long i = 1; i <= n; i++){
        people += (mx - a[i]) / g;
    }
    
    cout << people << " " << g << "\n";
}