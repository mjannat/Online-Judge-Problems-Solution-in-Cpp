#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int  test;
    scanf("%d",&test);
    while(test--)
    {
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        double onelength = sqrt(((c/2.0) * (c/2.0)) + ((c/2.0) * (c/2.0)));
        double outsidecircle = ((onelength/2.0)*(onelength/2.0)*pi)/2.0;
        double maincircle = pi * (c/2.0) * (c/2.0);
        double squarearea = onelength * onelength;
        double m = (maincircle - squarearea)/4.0;
        double ans = outsidecircle - m;
       printf("%.11lf\n",ans*4.0);
    }

}
