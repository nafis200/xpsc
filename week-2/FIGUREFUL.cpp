#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<pair<pair<int, int>, string>> v;
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        string s;
        cin >> a >> b >> s;
        v.push_back({{a, b}, s});
    }
    reverse(v.begin(), v.end());
    map<pair<int, int>, string> mp;
    for (int i = 0; i < t; i++)
    {
        if (mp.find(v[i].first) == mp.end())
        {
            mp.insert({v[i].first, v[i].second});
        }
    }
    int q; cin >> q;
    while(q--){
        int a, b; cin >> a >> b;
        cout << mp[{a,b}] << "\n";
    }
    // 123456789101
}