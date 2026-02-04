#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
int n;

bool ok(int k)
{
    int bits[40] = {0};
    int ors = 0;
    for (int i = 1; i <= k; i++)
    {
        ors |= a[i];
        for (int j = 0; j < 31; j++)
        {
            if ((a[i] >> j) & 1)
            {
                bits[j]++;
            }
        }
    }

    for (int i = 2; i + k - 1 <= n; i++)
    {
        int consecutive_or = 0;
        for (int j = 0; j < 31; j++)
        {
            if ((a[i + k - 1] >> j) & 1)
            {
                bits[j]++;
            }
            if ((a[i - 1] >> j) & 1)
            {
                bits[j]--;
            }
         }
         for(int j = 0; j < 31; j++){
              if(bits[j]){
                consecutive_or |= (1 << j);
              }
         }
         if(ors != consecutive_or){
            return false;
         }
    }
    return true;
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int l = 1, r = n;
    int ans = n;
    for(int k = 1; k <= n; k++){
        if(ok(k)){
            ans = k;
            break;
        }
    }
    cout << ans << "\n";
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
        solve();
    }
}