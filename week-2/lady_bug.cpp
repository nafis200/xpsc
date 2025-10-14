#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        int diagonal1 = 0, diagonal2 = 0;

        for(int i = 0; i < n; i++){
            if(s1[i] == '0' && i % 2 == 0){
                diagonal1++;
            }
            if(s1[i] == '0' && i % 2 == 1){
                diagonal2++;
            }
        }
        for(int i = 0; i < n; i++){
            if(s2[i] == '0' && i % 2 == 1){
                diagonal1++;
            }
            if(s2[i] == '0' && i % 2 == 0){
                diagonal2++;
            }
        }

        int firstArrayZero = ceil(n / 2.0);
        int secondArrayZero = floor(n / 2.0);
       
        if(diagonal1 >= firstArrayZero && diagonal2 >= secondArrayZero){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
}