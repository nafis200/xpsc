#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll sum = 0, sum1 = 0, ans = 0;
    ll l = 0, r = n - 1;
    while (l <= r)
    {
        if (sum1 == sum)
        {
            ans = sum;
        }
        if (sum < sum1)
        {
            sum += a[l];
            l++;
        }
        else
        {
            sum1 += a[r];
            r--;
        }
    }
    if (sum == sum1)
    {
        ans = sum;
    }
    cout << ans << endl;
}

// 