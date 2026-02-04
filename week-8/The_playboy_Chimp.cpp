#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
int n;

int first(int x)
{
    int l = 1, r = n;
    int mid = 0;
    int ans = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] < x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int last(int x)
{
    int l = 1, r = n;
    int mid = 0;
    int ans = -1;
     while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] > x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int ans = first(x);
        int ans1 = last(x);
        if(ans == -1){
            cout << 'X' << " ";
        }
        else{
            cout << a[ans] << " ";
        }
        if(ans1 == -1){
            cout << 'X' << "\n";
        }
        else{
            cout << a[ans1] << "\n";
        }
    }
}
