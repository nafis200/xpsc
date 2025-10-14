#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        reverse(s.begin(),s.end());
        vector<int>ans;
        int up = 0, low = 0; 
        for(int i = 0; i < (int)s.size();i++){
               if(s[i] == 'b'){
                  low++;;
               }
               else if(s[i] == 'B'){
                  up++;
               }
               else if(low > 0 && (s[i] >= 'a' && s[i] <= 'z')){
                      low--;
               }
               else if(up > 0 && (s[i] >= 'A' && s[i] <= 'Z')){
                   up--;
               }
               else{
                   ans.push_back(i);
               }
        }   
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        for(auto it : ans){
            cout << s[it];
        }
        cout << "\n";
    }
}