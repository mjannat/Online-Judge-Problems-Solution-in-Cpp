#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        double n;
        scanf("%lf",&n);
        double res = ((n - 2.0) * 180)/n;
        printf("%.4lf\n",res);
    }
}
