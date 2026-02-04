#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int freq[N];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(freq, 0, sizeof(freq));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    int mx = 1;
    for (int i = 2; i <= N; i++)
    {
        int cnt = 0;
        for (int j = i; j <= N; j += i)
        {
            cnt += freq[j];
        }
        mx = max(mx, cnt);
    }
    cout << mx << "\n";
}