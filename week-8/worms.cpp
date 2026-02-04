// #include <bits/stdc++.h>
// using namespace std;
// const long long N = 100009;
// long long a[N];
// long long n;

// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> n;
//     vector<long long>v(n + 1);
//     vector<long long> pref(n + 1);
//     for (long long i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//     }
//     for (long long i = 1; i <= n; i++)
//     {
//         pref[i] = pref[i - 1] + v[i];
//     }
//     long long q;
//     cin >> q;
//     while(q--){
//         long long x; cin >> x;
//         long long ans = lower_bound(pref.begin(),pref.end(),x) - pref.begin();
//         cout << ans << "\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
const long long N = 100009;
long long a[N];
long long n;
long long pref[N];
long long binary_search(long long x){
    long long l = 1, r = n;
    long long mid = 0, ans = 0;
    while(l <= r){
        mid = (l + r) / 2;
        if(pref[mid] >= x){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    pref[N] = {0};

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    int q; cin >> q;
    while(q--){
        long long x; cin >> x;
        long long ans = binary_search(x);
        cout << ans << "\n";
    }
}