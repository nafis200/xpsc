#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> people(n + 1), flat(m + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> people[i];
    }
    for (long long i = 1; i <= m; i++)
    {
        cin >> flat[i];
    }

    sort(people.begin(), people.end());
    sort(flat.begin(), flat.end());
    long long cnt = 0;
    long long j = 1;
    for (long long i = 1; i <= n; i++)
    {
        long long x = people[i] - k;
        j = lower_bound(flat.begin() + j, flat.end(), x) - flat.begin();

        if (j <= m && flat[j] <= people[i] + k)
        {
            cnt++;
            j++;
        }
    }
    cout << cnt << "\n";
}

