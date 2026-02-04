#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;

  
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    mp[0] = 0;
    int ans = 0;
    map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < (int)arr.size(); i++)
    {
        sum += arr[i];
        if (mp.find(sum - k) != mp.end())
        {
            ans = max(ans, (i + 1 - mp[sum - k]));
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return ans;
    cout << ans << "\n";
}