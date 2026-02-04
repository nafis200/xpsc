#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<string,int>v1,v2,v3;
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            v1[s]++;
        }
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            v2[s]++;
        }
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            v3[s]++;
        }

        int player1 = 0, player2 = 0, player3 = 0;

        for(auto it : v1){
            if(v2.find(it.first) == v2.end() && v3.find(it.first) == v3.end()){
                player1 += 3;
            }
            else if(v2.find(it.first) != v2.end() && v3.find(it.first) == v3.end()){
                player1+= 1;
            }
            else if(v2.find(it.first) == v2.end() && v3.find(it.first) != v3.end()){
                player1+= 1;
            }   
        }
        for(auto it : v2){
            if(v1.find(it.first) == v1.end() && v3.find(it.first) == v3.end()){
                player2 += 3;
            }
            else if(v1.find(it.first) != v1.end() && v3.find(it.first) == v3.end()){
                player2+= 1;
            }
            else if(v1.find(it.first) == v1.end() && v3.find(it.first) != v3.end()){
                player2+= 1;
            }   
        }
          for(auto it : v3){
            if(v2.find(it.first) == v2.end() && v1.find(it.first) == v1.end()){
                player3 += 3;
            }
            else if(v2.find(it.first) != v2.end() && v1.find(it.first) == v1.end()){
                player3+= 1;
            }
            else if(v2.find(it.first) == v2.end() && v1.find(it.first) != v1.end()){
                player3+= 1;
            }   
        }

        cout << player1 << " " << player2 << " " << player3 << "\n";
    }
}