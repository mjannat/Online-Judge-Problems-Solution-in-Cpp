#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     cin >> n;
     int arr[n+1];
     for(int i = 0;i < n; i++)cin >> arr[i];
     sort(arr,arr+n);
     for(int i = 0;i < n; i++)
     {
         if(i % 2 == 0)cout << arr[i] << " ";
     }
      for(int i = n-1;i >= 0; i--)
     {
         if(i % 2 == 1)cout << arr[i] << " ";
     }

 }
