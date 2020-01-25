#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
     double a,b,m,n;
     scanf("%lf %lf %lf %lf",&a,&b,&m,&n);
     double res1 = b* log10(a);
     double res2 = n * log10(m);
     if(res1 > res2)
     {
         printf(">\n");
     }
     else
     {
         printf("<\n");
     }
    }
}
