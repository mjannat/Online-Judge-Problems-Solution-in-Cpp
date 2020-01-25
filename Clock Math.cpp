#include<bits/stdc++.h>
using namespace std;
int main()
{
   int hour, mn;
   cin >> hour >> mn;
   double temp = hour * 30 + mn * .5;
   double temp2 = mn * 6;
   double angle = temp - temp2;
   cout << fixed << setprecision(10);
   if(angle <= 180)cout << angle << endl;
   else cout << 360.00 - angle << endl;
}
