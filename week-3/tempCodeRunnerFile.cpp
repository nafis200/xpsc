#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    priority_queue<long long>pq;
    long long ans = 0;
    for(long long i = 0; i < n; i++){
        long long x; cin >> x;
        pq.push(x);
        long long y = pq.top();
        if(y == x){
            ans++;
        }
    }
    cout << ans << "\n";
}