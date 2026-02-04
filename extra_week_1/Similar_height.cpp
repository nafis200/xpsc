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
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, x);
        }

        bool third = false;
        int single = 0;
        int found = 0;
        for (auto it : mp)
        {
            if (it.second == 1)
            {
                single++;
                found = it.first;
            }
            if (it.second > 2)
            {
                third = true;
            }
        }

        if (single > 1)
        {
            cout << ceil(single / 2.0) << "\n";
        }
        else if (single == 0)
        {
            cout << 0 << "\n";
        }
        else if (single == 1 && mx == found)
        {
            if (third)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 2 << "\n";
            }
        }
        else if (single == 1 && mx != found)
        {
            cout << 1 << "\n";
        }
    }
}