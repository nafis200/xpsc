#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n + 2];
        string s;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long prefix[n + 2] = {0};
        cin >> s;

        // 

        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        

        int l = 1, r = n;
        long long sum = 0;
        while (l < r)
        {
            if (s[l - 1] == 'L' && s[r - 1] == 'R')
            {
                sum = sum + prefix[r] - prefix[l - 1];
                l++;
                r--;
            }
            else if (s[r - 1] == 'L')
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        cout << sum << "\n";
    }
}


