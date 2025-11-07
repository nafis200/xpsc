#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pref[n + 2] = {0};
    set<int>st;
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(a[i]);
        pref[i] = (int)st.size();
    }
    while(q--){
        int l; cin >> l;
        l--;
        cout << pref[l] << "\n"; 
    }
}