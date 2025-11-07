#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st = {1, 2, 3, 4, 5};

    for (auto i : st)
    {
        auto it = st.upper_bound(i);
        if(it == st.end()){
            cout << "limit exceed\n";
        }
        else{
           cout << *it << "\n";
        }
        
    }
}