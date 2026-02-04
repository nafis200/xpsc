#include<bits/stdc++.h>
using namespace std;

class cmp{
  public:
  bool operator()(pair<long long,long long>a, pair<long long,long long>b){
      if(b.second == a.second){
        return a.first < b.first;
      }
      return b.second > a.second;
  }
};

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<pair<long long,long long>>v;
    long long n; cin >> n;
    for(long long i = 1; i <= n ; i++){
        long long a, b; cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(),v.end(),cmp());

    long long cnt = 1;
     long long last_end = v[0].second;
    for(long long i = 0; i < n - 1; i++){
       
        if(last_end <= v[i + 1].first){
            cnt++;
            last_end = v[i + 1].second;
        }
    }
    cout << cnt << "\n";

}