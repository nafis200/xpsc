#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 9;
long long prime[N];
void sieve()
{
    for (long long i = 2; i < N; i++)
    {
        if (!prime[i])
        {
            for (long long j = i * i; j < N; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
int32_t main()
{
    memset(prime, 0, sizeof(prime));
    sieve();
    long long n;
    cin >> n;
    if(n <= 2){
        cout << 1 << "\n";
    }
    else{
        cout << 2 << "\n";
    }
    for(long long i = 2; i <= n + 1; i++){
        if(prime[i] == 0){
            cout << 1 << " ";
        }
        else{
            cout << 2 << " ";
        }
    }
}