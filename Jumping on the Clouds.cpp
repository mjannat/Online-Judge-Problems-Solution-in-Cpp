#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, valley = 0, flag = -1,res = 0;
  cin >> n;
  int arr[n+1];
  for(int i = 0; i < n; i++)
  {
      cin >> arr[i];
      if(arr[i] == 0 && flag == -1)flag = i;
  }
  for(int i = flag; i < n;)
  {
     if(arr[i+2] != 1 && i + 2 < n) i += 2;
     else i++;
     res++;
  }
  cout << res-1 << endl;

}
