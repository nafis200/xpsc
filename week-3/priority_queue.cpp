#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int, int>> pq;
    int query;
    cin >> query;
    int i = 1;
    while (query--)
    {
    
        int m;
        cin >> m;
        pq.push({m, i});
        i++;
    }
    while (!pq.empty())
    {
        auto xy = pq.top();
        cout << xy.first << " " << xy.second << "\n";
        pq.pop();
    }
}