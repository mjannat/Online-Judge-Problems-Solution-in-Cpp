#include<bits/stdc++.h>
using namespace std;
int arr[1000009];
int main()
{
   int n,l,r,last;
   cin >> n;

   for(int i = 1; i <= n;i++)
   {
       cin >> l >> r;
       for(int j = l; j <= r;j++)arr[j] = i;
   }
   cin >> last;
   cout << (n - arr[last]) + 1 << endl;
}
