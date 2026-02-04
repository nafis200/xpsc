#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, s;
    cin >> n >> s;
    long long a[n + 1];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long l = 0, r = 0, sum = 0, cnt = 0, mx = 0;

    while (r < n)
    {
        if (sum + a[r] <= s)
        {
            sum += a[r];
            cnt++;
        }
        else
        {
            sum += a[r];
            cnt++;
            while (sum > s)
            {
                sum -= a[l];
                l++;
                cnt--;
            }
        }
        r++;
        mx = max(mx, cnt);
    }
    cout << mx << "\n";
}






