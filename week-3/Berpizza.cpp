#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5 + 7;
bool vis[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};
// 
int main()
{
    memset(vis, false, sizeof(vis));
    queue<int> q;
    priority_queue<pair<int, int>, vector<pair<int, int>>,cmp> pq;
    int query;
    cin >> query;
    int i = 1;
    while (query--)
    {
        int idx;
        cin >> idx;
        if (idx == 1)
        {
            int m;
            cin >> m;
            q.push(i);
            pq.push({m, i});
            i++;
        }
        else if (idx == 2)
        {
            int xy = q.front();
            while (vis[xy])
            {
                q.pop();
                xy = q.front();
            }
            q.pop();
            vis[xy] = true;
            cout << xy << " ";
        }
        else if (idx == 3)
        {
            auto xy = pq.top();
            int index = xy.second;
            while (vis[index])
            {
                pq.pop();
                xy = pq.top();
                index = xy.second;
            }
            pq.pop();
            vis[index] = true;
            cout << index << " ";
        }
    }
}
