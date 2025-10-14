#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int cnt = -1;
        for(int i = 1; i < (int)s.size(); i++){
             if(s[i] == s[i - 1]){
                 cnt = i;
                 break;
             }
        }
        if(cnt == -1){
            for(char i = 'a'; i <= 'z'; i++){
                if(s[(s.size() - 1)] != i){
                    s.push_back(i);
                    break;
                }
            }
        }
        else{
            for(char i = 'a'; i <= 'z'; i++){
                if(s[cnt] != i){
                    s.insert(cnt, 1, i);
                    break;
                }
            }
        }
        cout << s << "\n";
        
    }
    
}