#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Ordered set template
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<long long, long long>> people(n);
        for (int i = 0; i < n; i++)
        {
            cin >> people[i].first >> people[i].second;
        }

        sort(people.begin(), people.end());

        ordered_set<long long> os;
        long long greetings = 0;

        for (auto &p : people)
        {
            long long b = p.second;

            long long greater = os.size() - os.order_of_key(b + 1);

            greetings += greater;
            os.insert(b);
        }

        cout << greetings << "\n";
    }

    return 0;
}
