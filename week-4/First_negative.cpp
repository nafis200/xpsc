#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    queue<pair<int, int>> q;
    vector<int> ans;
    int l = 0, r = 0;
    while (r < n)
    {
        if (a[r] < 0)
        {
            q.push({r, a[r]});
        }
        if (r - l + 1 == k)
        {
            if (!q.empty())
            {
                auto x = q.front();
                int y = x.first;
                while (!q.empty() && y < l)
                {
                    q.pop();
                    auto x = q.front();
                    y = x.first;
                }
                if (!q.empty())
                {

                    auto x = q.front();
                    ans.push_back(x.second);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            else
            {
                ans.push_back(0);
            }
            r++;
            l++;
        }
        else
        {
            if (a[r] < 0)
            {
                q.push({r, a[r]});
            }
            r++;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

