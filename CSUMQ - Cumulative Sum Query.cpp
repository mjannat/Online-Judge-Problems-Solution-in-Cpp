#include<bits/stdc++.h>
using namespace std;
 int arr[1000005];
int main()
{
 int n, q, x, y, sum = 0, val;
 scanf("%d",&n);
 for(int i = 1; i <= n; i++)
 {
     scanf("%d",&val);
     arr[i] = sum + val;
     sum += val;
 }
 scanf("%d",&q);
 while(q--)
 {
  scanf("%d %d", &x,&y);
   printf("%d\n",arr[y + 1] - arr[x]);
 }
}
