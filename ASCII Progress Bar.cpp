#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n, sum;
   cin >> n;
   int tmp1, tmp2;
   double res = floor(n);
   tmp1 = sum = res / 10.0;
   tmp2 = 10 - tmp1;
   cout << '[';
   while(tmp1--)cout << '+';
   while(tmp2--)cout << '.';
   cout  << "] " << res << "%" << endl;
}

