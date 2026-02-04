#include <bits/stdc++.h>
using namespace std;
const int N = 3005;
int a[N];
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (!a[i])
        {
            for (int j = i; j < N; j += i)
            {
                a[j]++;
            }
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(a, 0, sizeof(a));
    sieve();
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 2)
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
}