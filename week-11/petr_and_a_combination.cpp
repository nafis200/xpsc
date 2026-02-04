#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[40] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    bool ok = false;

    for (int mask = 1; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int i = 0; i < 32; i++)
        {
            if((mask >> i) & 1){
                sum += a[i];
            }
            else{
                sum -= a[i];
            }
        }
        if(sum % 360 == 0){
            ok = true;
        }
        // 
    }

    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}