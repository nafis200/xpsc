#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n = 1000000;
void sieve()
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            v.push_back(i);
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        int d;
        cin >> d;
        int ans = 1;
        int j = 0;
        for (i = 0; i < (int)v.size(); i++)
        {
            if (v[i] - 1 >= d)
            {
                ans *= v[i];
                j = v[i];
                break;
            }
        }
        for (i = 0; i < (int)v.size(); i++)
        {
            if (v[i] - j >= d)
            {
                ans *= v[i];
                break;
            }
        }
        cout << ans << endl;
    }
}