#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, pat;
    cin >> txt >> pat;

    int n = txt.size();
    int k = pat.size();

    vector<int> freqPat(26, 0);
    for (char c : pat)
    {
        freqPat[c - 'a']++;
    }

    vector<int> freqWin(26, 0);
    int ans = 0;

    for (int i = 0; i < k; i++)
    {
        freqWin[txt[i] - 'a']++;
    }

    if (freqWin == freqPat)
        ans++;

    for (int i = k; i < n; i++)
    {
        freqWin[txt[i - k] - 'a']--;
        freqWin[txt[i] - 'a']++;

        if (freqWin == freqPat)
            ans++;
    }

    cout << ans << "\n";
}
