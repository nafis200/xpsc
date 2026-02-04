#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int prime[N];

void sieve()
{
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = min(i, prime[j]);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        while (x > 1)
        {
            int p = prime[x];
            mp[p]++;
            x /= p;
        }
    }
    for (auto it : mp)
    {
        if (it.second % n != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i < N; i++)
    {
        prime[i] = i;
    }
    sieve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}