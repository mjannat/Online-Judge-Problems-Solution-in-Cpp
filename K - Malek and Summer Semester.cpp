#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double y,x,i,res;
    scanf("%d",&t);
    for(i=1; i<=t; ++i)
    {
        double cnt = 0.0,val;
        scanf("%lf %lf",&x,&y);
        res = ceil(x*y);
        for(int j = 0; j < x; j++)
        {
            scanf("%lf",&val);
            if(val >= 50.0)cnt++;

        }
        if(cnt >= res)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

