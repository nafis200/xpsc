#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long n, l, r;
    cin >> n;
    vector<long long> v(n + 1);
    set<long long> st;
    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    t = 1;
    while (t--)
    {
        solve();
    }
}