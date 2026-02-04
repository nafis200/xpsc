#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    long long smallestMissing = 1;

    for (long long c : coins)
    {
        if (c > smallestMissing)
        {
            break;
        }
        smallestMissing += c;
    }

    cout << smallestMissing << "\n";
    return 0;
}
