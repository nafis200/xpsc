#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int l = 0, r = 0;
    int a[n + 1], b[m + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    int cnt = 0;

    while (l < n && r < m)
    {
        if (a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            r++;
            cout << cnt << " ";
        }
    }
    while(r < m){
        cout << cnt << " ";
        r++;
    }
}