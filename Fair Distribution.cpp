#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin >> n >> m;
   if(m == 0)cout << n << endl;
   else if( n == 0 || m % n == 0 )cout << 0 << endl;
   else cout << n - (m % n)  << endl;
}

