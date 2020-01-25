#include<bits/stdc++.h>
using namespace std;
long long cnt = 0;
long long primeFactors(long long n)
{

    long long neg  = 0;
    if(n < 0)n *= -1,neg = 1;

    for (long long i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cnt = 0;
            long long temp = n;
            while (temp % i == 0)
            {

                cnt++;
                temp = temp/i;
            }
            if(temp == 1 && (!neg  || cnt % 2 == 1))return cnt;

        }
    }
    return 1;
}
int main()
{
    long long test,cs = 1, n;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",cs++,primeFactors(n));
    }
}
