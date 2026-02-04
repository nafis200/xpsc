#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
long long a[N];
void solve()
{
    for (int i = 1; i < N; i++)
    {

        for (int j = i; j < N; j += i)
        {
            a[j]++;
        }
    }
}


int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(a, 0, sizeof(a));
    solve();
    long long n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        cout << a[x] << "\n";
    }
}