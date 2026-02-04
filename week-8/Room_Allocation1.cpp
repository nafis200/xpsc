#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<tuple<int, int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b, i});
    }
    sort(v.begin(), v.end());
    vector<int> ans(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int arrive = get<0>(v[i]);
        int destination = get<1>(v[i]);
        int idx = get<2>(v[i]) - 1;

        if (pq.empty() || pq.top().first >= arrive)
        {
            cnt++;
            pq.push({destination, cnt});
            ans[idx] = cnt;
        }
        else
        {
            auto it = pq.top();
            pq.pop();
            ans[idx] = it.second;
            pq.push({destination, it.second});
        }
    }
    cout << cnt << "\n";
    for (auto it : ans)
    {
        cout << it << " ";
    }
}