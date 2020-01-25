#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin >> test;
   while(test--)
   {
       int a,b,c;
       cin >> a >>b >> c;
       if(a + b >= c && b + c >= a && c + a >= b)
       {
           cout << "Yes\n";
       }
       else{
        cout << "No\n";
       }
   }
}
