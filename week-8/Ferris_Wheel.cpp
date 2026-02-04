#include <bits/stdc++.h>
using namespace std;
const long long N = 2e5 + 9;
long long a[N];
long long n, x;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> x;
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    long long i = 0, j = n - 1;
    long long cnt = 0;

    while (i <= j)
    {
        if (a[i] + a[j] <= x)
        {
            i++; 
        }
        j--; 
        cnt++;
    }

    cout << cnt << "\n";
}
