#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int x,y,z;
    int sum = 0;

    cin >> x >> y >> z >> a >> b >> c;
     if(a < x)
     {
         cout << "NO\n";
         return 0;
     }
     else sum += a - x;
     sum += b;
     if(sum < y)
     {
       cout << "NO\n";
         return 0;
     }
     else
     {
         sum = sum - y;
     }
     sum += c;
     if (sum < z)
     {
         cout << "NO\n";
         return 0;
     }
     cout << "YES\n";
}
