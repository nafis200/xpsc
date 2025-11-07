#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    stack<char>st;
    for(int i = 0; i < (int)s.size(); i++){
          if(s[i] == '<'){
             if(!st.empty()){
                st.pop();
             }
          }
          else{
             st.push(s[i]);
          }
    }
    stack<char>ans;
    while(!st.empty()){
        char x = st.top();
        st.pop();
        ans.push(x);
    }
    while(!ans.empty()){
        char x = ans.top();
        ans.pop();
        cout << x;
    }
}