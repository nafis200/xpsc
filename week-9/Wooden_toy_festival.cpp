#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int a[N];
int n;
bool ok(int time)
{
    int cnt = 1;
    int l = 1, r = 1;
    for (r = 1; r <= n; r++)
    {
        if (a[r] - a[l] > 2 * time)
        {
            cnt++;
            l = r;
        }
    }
    if(cnt <= 3){
        return true;
    }
    return false;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int l = 0, r = 1e9, mid = 0, ans = 0;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if(ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}