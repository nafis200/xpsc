#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, t;
    int n;
    cin >> n;
    cin >> s >> t;
    int limit = n;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            limit = i;
            break;
        }
    }
    for (int i = 0; i < limit; i++)
    {
        if (t[i] == '1')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}