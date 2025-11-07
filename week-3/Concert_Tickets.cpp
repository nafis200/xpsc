#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    multiset<int> tickets;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tickets.insert(x);
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        auto it = tickets.upper_bound(x);

        if (it == tickets.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            --it;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }
}
