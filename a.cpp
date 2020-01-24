#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long y,x,t,i,res;
    scanf("%lld",&t);
    for(i=1;i<=t;++i){
        scanf("%lld %lld",&y,&x);
        y*=100;
        res=y/(100+x);
        printf("%lld\n",res);
    }
    return 0;
}
