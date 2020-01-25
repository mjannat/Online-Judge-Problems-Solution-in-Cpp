#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll divisor[500009];
int main()
{
    divisor[1] = 1;
    for(int i = 2; i <= 500009; i++)
    {
        divisor[i]++;
        for(int j = i; j <= 500009; j+=i)divisor[j]+=i;
    }
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        cout << divisor[n] - n << endl;
    }
}
