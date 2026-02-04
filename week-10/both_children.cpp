#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main () {
 
  int t; cin >> t;
 
  while (t--) {
    
    int n; cin >> n;
    int a[n];
    map<int,int>mp;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
    }
    
    int indx = 0, cnt, mx = -1;
    
    for (int i = 1; i <= n; i++) {
      cnt = 0;
      for (int j = 1; j*j <= i; j++) {
        if(i%j == 0) {
          cnt += mp[j];
          if(j != i/j) cnt += mp[i/j];
        }
      }
      mx = max(mx, cnt);
    }
    cout << mx <<'\n';
  }
//   
}