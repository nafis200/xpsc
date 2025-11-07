#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    bool ok = false;
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = v.size() - 1;

        while (l < r)
        {
            if (v[i].first + v[l].first + v[r].first == k)
            {
                ans.push_back(v[l].second);
                ans.push_back(v[r].second);
                ans.push_back(v[i].second);
                ok = true;
                break;
            }
            else if (v[i].first + v[l].first + v[r].first > k)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        if (ok)
        {
            break;
        }
    }

    sort(ans.begin(), ans.end());
    if (ans.size() == 0)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
    }
}