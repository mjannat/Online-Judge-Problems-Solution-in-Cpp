#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,val,j = 0,sum = 0;
   cin >> n;
   long long arr[n+2];
   for(long long i = 0; i < n; i++)
   {
       cin >> arr[i];
       arr[i] -= i+1;
   }
   sort(arr,arr+n);
   for(long long i = 0; i < n;i++)
   {
      sum += abs(arr[i] - arr[n/2]);
   }
   cout << sum << endl;
}
