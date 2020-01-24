#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int a[n+5];
        scanf("%d",&a[0]);
        for(int i=1;i<n;++i){
            scanf("%d",&a[i]);
            if(a[i-1] != -1 && a[i] == -1) a[i]=(a[i-1]+1)%m;
        }
        for(int i=n-2;i>=0;--i){
            if(a[i]==-1) a[i]=(a[i+1]-1)%m;
        }
        for(int i=0; i<n; ++i){
            if(i< n-1) printf("%d ",a[i]);
            else  printf("%d\n",a[i]);
        }
    }
    return 0;
}
