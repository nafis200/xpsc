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
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        string r = "";
        for (auto it : st)
        {
            r += it;
        }
        int n1 = r.size();
        map<char,char>mp;
        for(int i = 0; i < n1 / 2; i++){
            mp[r[i]] = r[n1 - i - 1];
            mp[r[n1 - i - 1]] = r[i];
        }
// abc
        if(n1 % 2){
            mp[r[n1 / 2]] = r[n1 / 2];
        }
        for(int i = 0; i < n; i++){
            s[i] = mp[s[i]];
        }
        cout << s << "\n";
    }
}
