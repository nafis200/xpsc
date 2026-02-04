#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        bool ok = false;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                ok = true;
            }
            else
            {
                mp[x]++;
            }
        }
        int cnt = 0;
        for (auto it : mp)
        {

            if (it.second >= 2)
            {
                ok = true;
            }
            cnt += it.second % 2;
        }
        cout << cnt + ok << "\n";
    }
}