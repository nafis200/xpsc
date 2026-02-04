#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, t;
    cin >> n >> t;
    long long ans = 0;
    // 
    for (long long i = 0; i <= 30; i++)
    {
        long long block = (n / (1LL << i));

        if ((n >> i) & 1)
        {
            ans |= (1LL << i);
        }
        else
        {
            long long prev_num = 1e18;
            long long last_num = (block + 1) * (1LL << i);
        
            if (block != 0)
            {
                prev_num = (block * (1LL << i)) - 1;
            }

            long long mn = 0;
            long long last_sum = abs(n - prev_num);
            long long first_sum = abs(last_num - n);

            mn = min(last_sum, first_sum);
            if(mn <= t){
                ans |= (1LL << i);
            }
           
           
           
        }
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}