#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;
        int a[n + 2], b[m + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> ans;
        int l = 0, r = 0;
        bool ok = true;
        while (l < n && r < m)
        {
            if (a[l] <= b[r])
            {
                if (a[l] == 0)
                {
                    k++;
                }
                else if (a[l] > k)
                {
                    ok = false;
                    break;
                }
                ans.push_back(a[l]);
                l++;
            }
            else if (a[l] > b[r])
            {
                if (b[r] == 0)
                {
                    k++;
                }
                else if (b[r] > k)
                {
                    ok = false;
                    break;
                }
                ans.push_back(b[r]);
                r++;
            }
        }
        while (l < n)
        {
            if (a[l] == 0)
            {
                k++;
            }
            else if (a[l] > k)
            {
                ok = false;
                break;
            }
            ans.push_back(a[l]);
            l++;
        }

        while (r < m)
        {
            if (b[r] == 0)
            {
                k++;
            }
            else if (b[r] > k)
            {
                ok = false;
                break;
            }
            ans.push_back(b[r]);
            r++;
        }
        if (ok)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
        }
        else
        {
            cout << -1;
        }
        cout << "\n";
    }
}