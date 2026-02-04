#include <bits/stdc++.h>
using namespace std;
string s;
int n;

vector<int> odd()
{
    vector<int> v;
    int l = 0, r = n - 1;
    int dif = 0;
    int same = 0;
    while (l < r)
    {
        if (s[l] == s[r])
        {
            same++;
        }
        else if (s[l] != s[r])
        {
            dif++;
        }
        l++;
        r--;
    }
    if (dif == 0)
    {
        for (int i = 0; i <= n; i++)
        {
            v.push_back(i);
        }
    }
    else
    {
        v.push_back(dif);
        v.push_back(dif + 1);
        for (int i = 1; i <= same; i++)
        {
            int x = dif + (i * 2);
            v.push_back(x);
            v.push_back(x + 1);
        }
    }
    return v;
}

vector<int> even()
{
    vector<int> v;
    int l = 0;
    int r = n - 1;
    int dif = 0;
    int same = 0;
    while (l < r)
    {
        if (s[l] == s[r])
        {
            same++;
        }
        else if (s[l] != s[r])
        {
            dif++;
        }
        l++;
        r--;
    }
    if (dif == 0)
    {
        for (int i = 0; i <= n; i += 2)
        {
            v.push_back(i);
        }
    }
    else
    {
        for (int i = 0; i <= same; i++)
        {
            int x = dif + (i * 2);
            v.push_back(x);
        }
    }
    return v;
}

void solve()
{
    cin >> n;
    cin >> s;
    vector<int> ans;
    if (n % 2)
    {
        ans = odd();
    }
    else
    {
        ans = even();
    }

    vector<int> res(n + 1, 0);
    for (int i = 0; i < (int)ans.size(); i++)
    {
        res[ans[i]] = 1;
    }

    for(auto it : res){
        cout << it;
    }
    cout << "\n";
}

int32_t main()
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