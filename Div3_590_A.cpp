#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while(test--)
  {
      int n,sum = 0,val;
      cin >> n;
      int arr[n+1];
      for(int i = 0; i < n; i++)
      {
          cin >> val;
          sum += val;
      }
      if(sum % n == 0)cout << sum / n << endl;
      else cout << sum / n + 1 << endl;
  }
}
