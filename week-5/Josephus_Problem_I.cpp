#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    vector<int> ans;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        q.push(x);
        x = q.front();
        q.pop();
        ans.push_back(x);
    }

    for(auto it : ans){
        cout << it << " ";
    }
}