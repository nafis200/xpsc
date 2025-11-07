#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    bool ok = true;
    long long sum = 0;
    for (auto it : mp)
    {
        sum = 1LL * (sum + it.second);
        if (sum > 2)
        {
            ok = false;
             break;
        }
    }
    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}