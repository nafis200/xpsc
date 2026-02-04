#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a.push_back(i + 1);
        }
        else
        {
            b.push_back(i + 1);
        }
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    sort(b.begin(), b.end());
    bool alicewins = false;
    for(auto it : a){
        bool bobwins = false;
        for(auto it1 : b){
            if(it1 > it && !(it == 1 && it1 == n) || (it1 == 1 && it == n)){
                  bobwins = true;
                  break;
            }
        }
        if(!bobwins){
            alicewins = true;
            break;
        }
    }

    if(alicewins){
        cout << "Alice\n";
    }
    else{
        cout << "Bob\n";
    }
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