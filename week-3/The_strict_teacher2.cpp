#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m, q;
        cin >> n >> m >> q;
        vector<int>teacher,david;
        for(int i = 0; i < m; i++){
             int x; cin >> x;
             teacher.push_back(x);
        }
        
        sort(teacher.begin(),teacher.end());

        for(int i = 0; i < q; i++){
             int x; cin >> x;
             int j = lower_bound(teacher.begin(),teacher.end(),x) - teacher.begin();

             if(j == 0){
                cout << teacher[0] - 1 << "\n";
             }
             else if(j == teacher.size()){
                cout << n - teacher[j - 1] << "\n";
             }
             else{
                 int ans = (teacher[j] - teacher[j - 1]) / 2;
                 cout << ans << "\n";
             }
        }



    }
}