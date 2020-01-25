#include<stdio.h>
#include<math.h>
 void res(int a,int b)
 {
     int q,sum=0;
    while(b>0){
        q=b/a;
        sum=sum+q;
        b=q;
    }
     printf(" %d (%d)",a,sum);
 }
int main()
{
    int ara[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103 };
    int i,l,num,T,sum=0,n;
    scanf("%d",&T);
    for(n=1;n<=T;n++){
    scanf("%d",&num);
     printf("Case %d: %d =",n,num);
    for(i=0;ara[i]<=num;i++){
        l=ara[i];
        if(i!=0){
      printf(" *");}
        res(l,num);
    }
     printf("\n");
    }
    return 0;
}
