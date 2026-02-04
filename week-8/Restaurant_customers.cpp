#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    int sum = 0;
    int mx = 0;
    for (auto it : mp)
    {
        sum += it.second;
        mx = max(mx, sum);
    }
    cout << mx << "\n";
}