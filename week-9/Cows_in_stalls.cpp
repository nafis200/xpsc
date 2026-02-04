#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
int n, k;

bool ok(int distance)
{
    int l = 1, cnt = 1;
    for (int r = 1; r <= n; r++)
    {
        if (a[r] - a[l] >= distance)
        {
            cnt++;
            l = r;
        }
    }
    return (cnt >= k);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int l = 0, r = 1e9, mid = 0, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << "\n";
}