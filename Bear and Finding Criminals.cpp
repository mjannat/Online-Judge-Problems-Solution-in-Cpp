#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,cnt = 0;
   cin >> n >> k;
   int arr[n+1];
   for(int i = 0;i < n;i++)cin >> arr[i];
   if(arr[k-1] == 1)cnt = 1;
   if(n == 1)
   {
     if(arr[0] == 1)  cout << 1 << endl;
     else cout << 0 << endl;
       return 0;
   }

   for(int i = k-2,j = k ;i >= 0 || j < n;i--,j++)
   {
       if(i < 0 && arr[j] == 1)cnt++;
       else if(j >= n)cnt++;
       if(arr[i] ==1 && arr[j] == 1)cnt+=2;
   }
   cout << cnt << endl;
}
