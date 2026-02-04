#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int q;
        cin >> q;
        bool ok;
        while (q--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO\n";
                continue;
            }
            ok = true;
            map<char, int> mp;
            map<int, char> mp1;

            for (int i = 0; i < n; i++)
            {
                if (mp.find(s[i]) == mp.end())
                {
                    mp[s[i]] = a[i];
                }
                if (mp1.find(a[i]) == mp1.end())
                {
                    mp1[a[i]] = s[i];
                }
                if (mp[s[i]] != a[i] || mp1[a[i]] != s[i])
                {
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}