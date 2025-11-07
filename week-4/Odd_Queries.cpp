#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 2], pref[n + 2] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            pref[i] = a[i] + pref[i - 1];
        }

        while (q--)
        {
            int sum = pref[n];

            int l, r, value;
            cin >> l >> r >> value;

            sum -= (pref[r] - pref[l - 1]);

            sum += (r - l + 1) * value;

            if(sum % 2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        // 
    }
}