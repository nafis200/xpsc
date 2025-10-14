#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st, st1;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] != 'B' && s[i] != 'b')
            {
                st.push(s[i]);
            }
            else if (s[i] == 'b')
            {
                while (!st.empty())
                {
                    char x = st.top();
                    st.pop();
                    if (x >= 'a' && x <= 'z')
                    {
                        break;
                    }
                    else
                    {
                        st1.push(x);
                    }
                }
                while (!st1.empty())
                {
                    char x = st1.top();
                    st1.pop();
                    st.push(x);
                }
            }
            else if (s[i] == 'B')
            {
                while (!st.empty())
                {
                    char x = st.top();
                    st.pop();
                    if (x >= 'A' && x <= 'Z')
                    {
                        break;
                    }
                    else
                    {
                        st1.push(x);
                    }
                }
                while (!st1.empty())
                {
                    char x = st1.top();
                    st1.pop();
                    st.push(x);
                }
            }
        }
        
        
        
        if (st.empty())
        {
            cout << "\n";
        }
        else
        {
            while (!st.empty())
            {
                char x = st.top();
                st.pop();
                st1.push(x);
            }
            while(!st1.empty()){
                char x = st1.top();
                st1.pop();
                cout << x;
            }
            cout << "\n";
           
        }
    }
}