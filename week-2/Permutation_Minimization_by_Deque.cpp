#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        deque<int>q;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(q.empty()){
                q.push_back(x);
                continue;
            }
            if(q.front() > x){
                q.push_front(x);
            }
            else{
                q.push_back(x);
            }
        }
        for(auto it : q){
            cout << it << " ";
        }
        cout << "\n";
    }
}
