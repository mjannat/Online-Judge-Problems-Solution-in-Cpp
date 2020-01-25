#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, mx = -1,cnt=0;
   cin >> n;
   int arr[n+1];
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
       if(arr[i] > mx)
       {
           mx = max(arr[i],mx);
           cnt = 1;
       }
       else if(arr[i] == mx)
       {
           cnt++;
       }
   }
   cout << cnt << endl;
}
