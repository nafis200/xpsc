#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 2;
    int bits[35] = {0};
    for (int k = 0; k < 31; k++)
    {
        if ((a >> k) & 1)
        {
            bits[k]++;
        }
    }

    for (int k = 0; k < 31; k++)
    {
        cout << bits[k] << " ";
    }
}