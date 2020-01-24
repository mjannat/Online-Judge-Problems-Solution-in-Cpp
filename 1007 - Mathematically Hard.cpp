
#include<bits/stdc++.h>
using namespace std;
#define M 5000000

int phi[M+2];
unsigned long long sum[M+2];
int phii()
{
    for(int i = 2; i <= M ; i++)
        phi[i] = i;
    for(int i = 2; i <= M ; i++)
    {
        if (phi[i] == i)
        {
            for(int j = i; j <= M ; j+=i)
                phi[j] -= phi[j] / i;

        }
    }


}
void calsum()
{
    sum[1] = 0;

    for(int i=2; i<=M; i++)
    {
        sum[i] = phi[i];
        sum[i]*=phi[i];
        sum[i]+=sum[i-1];
    }

}
    int main()
    {
        int test;
        unsigned long long a, b;
        scanf("%d",&test);
        phii();
        calsum();
        for (int t = 1; t <= test; t++)
        {
            scanf("%llu%llu",&a,&b);
            printf("Case %d: %llu\n",t,sum[b]-sum[a-1]);
        }
    }
