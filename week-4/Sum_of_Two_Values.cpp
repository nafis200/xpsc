#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    int l = 0, r = v.size() - 1;
    vector<int>ans;
    while(l < r){
        if(v[l].first + v[r].first == k){
            ans.push_back(v[l].second);
            ans.push_back(v[r].second);
            break;
        }
        else if(v[l].first + v[r].first > k){
            r--;
        }
        else{
            l++;
        }
    }
    sort(ans.begin(),ans.end());
    if(ans.size() == 0){
        cout << "IMPOSSIBLE\n";
    }
    else{
        cout << ans[0] << " " << ans[1] << "\n";
    }

}