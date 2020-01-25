#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int Max = 1000006;

int phi[Max];
bool mark[Max];
void Euler_Sieve_phi(){
    for(int i=1;i<Max;i++) phi[i]=i;
    mark[1]=true;

    for(int i=2;i<Max;i++){
        if(!mark[i]){
            for(int j=i;j<Max;j+=i){
                mark[j]=true;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

int main(){
    Euler_Sieve_phi();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        ll temp = (n*phi[n])/2;
        ll ans = (n*(n-1)/2)-(temp);
        printf("%lld\n",ans);
    }
    return 0;
}
