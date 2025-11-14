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
    long long l = 0, r = 0, ans = 0, sum = 0;

    while (r < n)
    {
        if (sum + a[r] <= s)
        {
            sum += a[r];
            ans += (r - l + 1);
        }
        else
        {
            sum += a[r];

            while (sum > s)
            {
                sum -= a[l];
                l++;
            }
            ans += (r - l + 1);
        }
        r++;
       
    }
    cout << ans << "\n";
}
