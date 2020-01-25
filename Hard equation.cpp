#include <bits/stdc++.h>
using namespace std;
int bigmod ( long long a, int p, int m )
{
    if ( p == 0 )return 1; // If power is 0 ( a ^ 0 ), return 1

    if ( p & 1 ) // If power is odd
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        long long tmp = bigmod ( a, p / 2, m );
        return ( tmp * tmp ) % m;
    }
}
int main()
{
    return 0;
}
