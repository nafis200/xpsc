#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        int start = -1, end = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B' && start == -1){
                start = i;
                end = i;
            }
            else if(s[i] == 'B'){
                end = i;
            }
        }
        cout << (end - start + 1) << "\n";
    }
}