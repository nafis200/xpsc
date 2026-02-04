#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push_back(x);
    }

    int player1 = 0, player2 = 0;
    int cnt = 0;

    while (!q.empty())
    {
        if (q.front() >= q.back())
        {
            if (cnt % 2 == 0)
            {
                player1 += q.front();
            }
            else
            {
                player2 += q.front();
            }
            q.pop_front();
        }
        else
        {
            if (cnt % 2 == 0)
            {
                player1 += q.back();
            }
            else
            {
                player2 += q.back();
            }
            q.pop_back();
        }
        cnt++;
    }

    cout << player1 << " " << player2 << "\n";
}
