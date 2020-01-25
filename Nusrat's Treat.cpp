#include <bits/stdc++.h>
using namespace std;
#define MAX 80000000
bool prime[MAX];
int store[MAX];
void Sieve()
{
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    for (int p=2; p*p<= MAX; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p*p; i <= MAX; i += p)
                prime[i] = false;
        }
    }

    int i = 1;
    for (int p = 1; p <= MAX; p++)
    {
        if (prime[p])
        {
            store[i++] = p;
        }

    }
}
int main()
{
    Sieve();
    int n;
    cin >> n;
    cout << store[n] << endl;
}
