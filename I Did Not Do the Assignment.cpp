#include<bits/stdc++.h>
using namespace std;
#define maxn 1005
bool res[1005];
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isPrime(n))printf("NO PUNISHMENT\n");
    else
    {
        while(n--)  printf("I DID NOT DO THE ASSIGNMENT.\n");

    }
}
