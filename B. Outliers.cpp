#include<bits//stdc++.h>
using namespace std;
int main()
{
   int test, cs = 1;
   scanf("%d",&test);
   while(test--)
   {
       int n;
       scanf("%d",&n);
       double avg = 0.0, sum = 0.0, low ,high,arr[n+1];
       scanf("%lf %lf",&low,&high);
       for(int i = 0; i < n;i++)
       {
           scanf("%lf",&arr[i]);
           sum += arr[i];
       }
       avg = sum / (double)n;
       printf("Case %d:\n",cs++);
       int flag = 0;
        for(int i = 0; i < n;i++)
       {
           double da = abs(arr[i] - avg);
           double dl = abs(arr[i] - low);
           double dh = abs(arr[i] - high);
           double d8 = min( dl, dh);
           if(d8 < da)
           {
            printf("%.2lf\n",arr[i]);
            flag = 1;
           }
       }
       if(flag == 0)printf("No outliers\n");
   }
}
