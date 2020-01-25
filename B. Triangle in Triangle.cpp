#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    scanf("%d",&test);
    while(test--)
    {
         double ab,bc,ca;
         scanf("%lf %lf %lf",&bc,&ca,&ab);
         printf("Case %d: ",cs++);
         double ans = (2.0 * bc * bc * ab) /((bc * bc) + (ca * ca) + (ab * ab));
         printf("%.10lf\n",ans);

    }

}
