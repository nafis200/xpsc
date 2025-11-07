#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int l = 0, r = 0;
        int mn = 1e9;
        int sum = 0;
        while (r < n)
        {
            if (r - l + 1 == m)
            {
                if (s[r] == 'W')
                {
                    sum++;
                }
                mn = min(mn, sum);
                if (s[l] == 'W')
                {
                    sum--;
                }
                l++;
                r++;
            }
            else
            {
                if (s[r] == 'W')
                {
                    sum++;
                }
                r++;
            }
        }
        cout << mn << "\n";
    }
}