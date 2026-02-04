#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    int maxbit = __lg(n);
    set<long long> st;
    st.insert(n);

    for (long long i = 0; i <= maxbit; i++)
    {
        if ((n >> i) & 1)
        {
            long long y = (1LL << i);
            if (n - y != 0)
            {
                st.insert(n - y);
            }
            // 
        }
    }
    cout << st.size() << "\n";
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}