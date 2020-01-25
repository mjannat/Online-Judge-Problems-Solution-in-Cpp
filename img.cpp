#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        int cnt0=0,sw1=0;
        scanf("%d %d",&n,&m);
        for(int i=0; i<n; ++i)
        {
            string str;
            cin>>str;
            if(i==0 || i==n-1)
                for(int j=0; j<m; ++j)
                {
                    if(str[j]=='0') cnt0++;
                }
            else
            {
                if(str[0]=='0') cnt0++;
                if(str[m-1]=='0') cnt0++;
                for(int j=1; j<m-1; j++)
                    if(str[j]=='1')sw1++;
            }
        }
        if(cnt0==0) printf("0\n");
        else if(cnt0>sw1) printf("-1\n");
        else printf("%d\n",cnt0);
    }
    return 0;
}
