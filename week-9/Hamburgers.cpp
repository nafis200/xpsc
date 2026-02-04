#include <bits/stdc++.h>
using namespace std;
string st;
long long nb, ns, nc;
long long pb, ps, pc;
long long r;
bool ok(long long burger)
{
    long long b = 0, s = 0, c = 0;
    for (long long i = 0; i < st.size(); i++)
    {
        if (st[i] == 'B')
        {
            b++;
        }
        else if (st[i] == 'S')
        {
            s++;
        }
        else
        {
            c++;
        }
    }

    long long mb = b * burger;
    long long ms = s * burger;
    long long mc = c * burger;

    if (mb <= nb && ms <= ns && mc <= nc)
    {
        return true;
    }
    long long price = 0;
    if (mb > nb)
    {
        price += (mb - nb) * pb;
    }
    if (ms > ns)
    {
        price += (ms - ns) * ps;
    }
    if (mc > nc)
    {
        price += (mc - nc) * pc;
    }
    if (price > r)
    {
        return false;
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> st;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    long long l = 0, h = 1e14, mid = 0, ans = 0;

    while (l <= h)
    {
        mid = (l + h) / 2;
        bool fn = ok(mid);
        if (fn)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << ans << "\n";
}