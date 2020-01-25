#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a=0,b=1,c,n;
    scanf("%d",&n);


    for(i=1; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        //printf("%d ",c);
    }
     printf("%d ",c);
    return 0;

}
