#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> b[i];
    }

    vector<int> a(n + 1);

    a[1] = b[1];
    for (int i = 2; i <= n - 1; i++)
    {
        a[i] = b[i - 1] | b[i];
    }
    a[n] = b[n - 1];

    for (int i = 1; i <= n - 1; i++)
    {
        if ((a[i] & a[i + 1]) != b[i])
        {
            cout << -1 << "\n";
            return;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
