#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    int mx = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        if (r - l + 1 == k)
        {
            sum += a[r];
            mx = max(mx, sum);
            sum -= a[l];
            l++;
            r++;
        }
        else
        {
            sum += a[r];
            r++;
        }
    }
    cout << mx << "\n";
}

