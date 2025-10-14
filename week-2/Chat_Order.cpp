#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second < b.second)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = n; i >= 1; i--)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            mp[s] = i;
        }
        else
        {
            mp[s] = i;
        }
    }

    vector<pair<string, int>> v;
    for (auto it : mp)
    {
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.first << "\n";
    }
}

