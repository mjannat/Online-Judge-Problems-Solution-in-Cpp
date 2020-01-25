#include <bits/stdc++.h>
using namespace std;
#define MAX 1000009
typedef long long ll;
bool prime[MAX];
void Sieve()
{
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    for (ll p = 2; p*p <= MAX; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p*p; i <= MAX; i += p)
                prime[i] = false;
        }
    }

}
int main()
{
    ll test;
    scanf("%lld",&test);
    Sieve();
    while(test--)
    {
        ll n;
        scanf("%lld",&n);
        if(prime[n] == true)
        {
            printf("%lld is a prime number.\n",n);
        }
        else
        {
            printf("%lld is not a prime number.\n",n);
        }
    }
    return 0;
}

