#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 1)
            {
                if (j % 2 == 1)
                {
                    cout << 2 << " ";
                }
                else
                {
                    cout << 3 << " ";
                }
            }
            else{
                if (j % 2 == 1)
                {
                    cout << 3 << " ";
                }
                else
                {
                    cout << 2 << " ";
                }
            }
        }
        cout << "\n";
    }
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

// f