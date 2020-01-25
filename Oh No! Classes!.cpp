#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1000005];
int main()
{
 int test;
 scanf("%d",&test);
 while(test--)
 {
     ll sum = 0, a, b, mx = -1;
     memset(arr,0,sizeof(arr));
     for(int j = 0; j < 3;j++)
     {
       scanf("%lld %lld",&a,&b);
       mx = max(mx,a);
       mx = max(mx,b);
       for(int i = a; i <= b;i++)
       {
           arr[i] = 1;
       }

     }
     for(int i = 0; i <= mx;i++)
     {
       sum += arr[i];
     }
     printf("%lld\n",sum);
 }
}
