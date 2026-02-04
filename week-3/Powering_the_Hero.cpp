#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        priority_queue<long long> pq;
        long long sum = 0;
        for (long long i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            if (x == 0)
            {
                if (!pq.empty())
                {
                    long long y = pq.top();
                    pq.pop();
                    sum += y;
                }
            }
            else
            {
                pq.push(x);
            }
        }
        cout << sum << "\n";
    }
}