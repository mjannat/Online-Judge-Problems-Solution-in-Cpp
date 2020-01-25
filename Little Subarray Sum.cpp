#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, a, b, val, tmp= 0;
  cin >> n >> a >> b;
  for(int i = 0; i < n; i++)
  {
     cin >> val;
    if(i >= a && i <= b)tmp += val;
  }
  cout << tmp << endl;
}
