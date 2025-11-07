#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1], b[m + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;

    while (l < n && r < m)
    {
        if (a[l] == b[r])
        {
            cout << a[l] << " ";
            cout << b[r] << " ";
            l++;
            r++;
        }
        else if (a[l] < b[r])
        {
            cout << a[l] << " ";
            l++;
        }
        else
        {
            cout << b[r] << " ";
            r++;
        }
    }

    while(r < m){
        cout << b[r] << " ";
        r++;
    }

    while(l < n){
        cout << a[l] << " ";
        l++;
    }
}