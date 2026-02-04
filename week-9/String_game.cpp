#include <bits/stdc++.h>
using namespace std;

string t, p;
vector<int> a;
int n, m;

bool check(int k)
{
    vector<bool> deleted(n, false);

    for (int i = 0; i < k; i++)
    {
        deleted[a[i]] = true;
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (!deleted[i] && j < m && t[i] == p[j])
        {
            j++;
        }
    }

    return (j == m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t >> p;

    n = t.size();
    m = p.size();

    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    int left = 0, right = n, ans = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (check(mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
