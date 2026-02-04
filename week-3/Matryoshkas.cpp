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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        auto it = mp.begin();
        int prev = it->first;
        int count = it->second;
        int ans = it->second;

        for (auto i : mp)
        {
            if (i.first == prev)
                continue;

            if (i.first - 1 == prev)
            {
                if (i.second > count)
                {
                    ans += (i.second - count); 
                }
            }
            else
            {
                ans += i.second;
            }

            prev = i.first;
            count = i.second;
        }
        cout << ans << "\n";
    }
}
