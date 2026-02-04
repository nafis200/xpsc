#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(32, 0);
    for (int i = 0; i <= 30; i++)
    {
        if ((n >> i) & 1)
        {
            if (i == 0)
            {
                v[i] = 1;
            }
            else
            {
                if (v[i - 1] == 1)
                {
                    v[i + 1] = 1;
                    v[i - 1] = -1;
                }
                else if(v[i] == 1){
                    v[i] = 0;
                    v[i + 1] = 1;
                }
                else{
                    v[i] = 1;
                }
            }
        }
    }
    cout << 31 << "\n";
    for(int i = 0; i < 31; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}