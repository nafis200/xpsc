#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> children(n);
    for (int i = 0; i < n; i++)
    {
        children[i] = i + 1;
    }

    vector<int> ans;
    int pos = 0;

    for (int remaining = n; remaining > 0; remaining--)
    {
        pos = (pos + k) % remaining;
        ans.push_back(children[pos]);
        children.erase(children.begin() + pos);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}
