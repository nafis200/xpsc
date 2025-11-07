#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
            mp[a[i]].insert(i);

        int ans = 1;
        int idx = 1;
        int pos = 2;

        while (idx <= n)
        {
            vector<int> v;
            bool ok = true;

            while (idx < pos)
            {
                v.push_back(idx);
                idx++;
            }

            for (auto i : v)
            {
                auto it = mp[a[i]].upper_bound(i);
                if (it == mp[a[i]].end())
                {
                    ok = false;
                    break;
                }
                else
                {
                    pos = max(pos, *it);
                }
            }

            if (!ok)
                break;
            else
                ans++;

            pos++;
        }

        cout << ans << "\n";
    }
}
