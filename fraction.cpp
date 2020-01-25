#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  cin >> a;
  b = ((a + 1)/2) - 1;
  if(b % 2 == 0 && (a - b) % 2 == 0) b--;
  cout << b <<" " << a - b << endl;
}
