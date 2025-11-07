#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, n;
    cin >> x >> n;
    set<int> st;
    multiset<int> st1;
    st.insert(0);
    st.insert(x);

    for (int i = 1; i <= n; i++)
    {
        int x1;
        cin >> x1;
        auto it = st.lower_bound(x1);
        auto it1 = prev(it);

        st1.insert(*it - x1);
        st1.insert(x1 - *it1);
        int num = *it - *it1;
        if (st1.find(num) != st1.end())
        {
            auto del = st1.lower_bound(num);
            st1.erase(del);
        }
        st.insert(x1);
        auto ans = st1.end();
        --ans;
        cout << *ans << " ";
    }
}



