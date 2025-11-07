#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mn = 1, mx = n;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (a[l] == mn)
            {
                mn++;
                l++;
            }
            else if (a[r] == mn)
            {
                mn++;
                r--;
            }
            else if (a[l] == mx)
            {
                mx--;
                l++;
            }
            else if (a[r] == mx)
            {
                mx--;
                r--;
            }
            else
            {
                break;
            }
        }
        if(l > r){
            cout << -1 << "\n";
        }
        else{
            cout << l + 1 << " " << r + 1 << "\n";
        }
    }
}