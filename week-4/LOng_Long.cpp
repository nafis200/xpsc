#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n + 1];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        vector<long long> v;
        long long first = -1, last = -1;
        long long l = 0;
        while (l < n)
        {
            if (first == -1 && a[l] == 0)
            {   l++;
                continue;
            }
            if (a[l] <= 0)
            {

                if (first == -1)
                {
                    first = l;
                }
                last = l;
                sum -= (a[l]);
            }
            else
            {
                if (first != -1)
                {
                    long long ans = last - first + 1;
                    v.push_back(ans);
                }
                first = -1, last = -1;
                sum += a[l];
            }
            l++;
        }
        if (first != -1)
        {
            long long ans = last - first + 1;
            v.push_back(ans);
        }
        cout << sum << " " << v.size() << "\n";
    }
}