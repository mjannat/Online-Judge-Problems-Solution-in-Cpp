#include<bits/stdc++.h>
using namespace std;
int main()
{
  int  test, cs = 1;
  cin >> test;
  while(test--)
  {
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   int first = a + c, sec = b + d;
   if(first > sec)cout << 1 << endl;
   else if(sec > first) cout << 2 << endl;
   else
   {
       if(b > c)cout << 2 << endl;
   else if(c > b) cout << 1 << endl;
   else cout << -1 << endl;
   }
  }
}
