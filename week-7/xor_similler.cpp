#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[35] = {0};
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        for (int k = 0; k <= 30; k++)
        {
            if ((x >> k) & 1)
            {
                a[k]++;
            }
        }
    }
    int ans = 0;
    for(int i = 30; i >= 0; i--){
        if(a[i] == n){
            ans += pow(2, i);
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}