#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }
    string res(s.size(), ' ');
    int left = 0, right = s.size() - 1;
    int odd = 0;
    char oddChar = 0;
    // 

    for (auto it = freq.begin(); it != freq.end(); ++it)
        if (it->second % 2)
        {
            odd++;
            oddChar = it->first;
            if (odd > 1)
            {
                break;
            }
        }

    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it)
    {
        char ch = it->first;
        int c = it->second;
        if (c % 2)
        {
            res[s.size() / 2] = ch;
            c--;
        }
        while (c > 0)
        {
            res[left] = ch;
            res[right] = ch;
            c -= 2;
            left++;
            right--;
        }
    }

    cout << res << "\n";
    return 0;
}
