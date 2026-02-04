#include <bits/stdc++.h>
using namespace std;
const int N = 100009;
int a[N];
int n;

int binary_search(int x){
    int l = 1, r = n;
    int mid = 0, ans = 0;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] <= x){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
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

    sort(a + 1, a + n + 1);

    int q; cin >> q;
     while (q--)
    {
        int x;
        cin >> x;
        int ans = binary_search(x);
        cout << ans << "\n";
    }


    // vector<int> v(n + 1);
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> v[i];
    // }
    // sort(v.begin(), v.end());
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int x;
    //     cin >> x;
    //     int it = upper_bound(v.begin(), v.end(), x) - v.begin();
    //     cout << --it << "\n";
    // }
}