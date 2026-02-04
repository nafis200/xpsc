#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1;
    char c = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != c)
        {
            cnt++;
        }
        c = s[i];
    }
    cout << cnt << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}