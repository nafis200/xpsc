#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    deque<int> dq;
    bool ok = true;
    while (q--)
    {
        string s;
        cin >> s;
        if (ok)
        {
            if (s == "toFront")
            {
                int x;
                cin >> x;
                dq.push_front(x);
            }
            else if (s == "push_back")
            {
                int x;
                cin >> x;
                dq.push_back(x);
            }
            else if (s == "front")
            {
                if (dq.empty())
                {
                    cout << "No job for Ada?\n";
                }
                else
                {
                    int y = dq.front();
                    dq.pop_front();
                    cout << y << "\n";
                }
            }
            else if (s == "back")
            {
                if (dq.empty())
                {
                    cout << "No job for Ada?\n";
                }
                else
                {
                    int y = dq.back();
                    dq.pop_back();
                    cout << y << "\n";
                }
            }
            else if (s == "reverse")
            {
                ok = false;
            }
        }
        else
        {
            if (s == "toFront")
            {

                int x;
                cin >> x;
                dq.push_back(x);
            }
            else if (s == "push_back")
            {
                int x;
                cin >> x;
                dq.push_front(x);
            }
            else if (s == "front")
            {
                if (dq.empty())
                {
                    cout << "No job for Ada?\n";
                }
                else
                {
                    int y = dq.back();
                    dq.pop_back();
                    cout << y << "\n";
                }
            }
            else if (s == "back")
            {
                if (dq.empty())
                {
                    cout << "No job for Ada?\n";
                }
                else
                {
                    int y = dq.front();
                    dq.pop_front();
                    cout << y << "\n";
                    // 
                }
            }
            else if (s == "reverse")
            {
                ok = true;
            }
        }
    }
}