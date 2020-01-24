#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a =0 ,b= 0;
  cin >> n;
  int arr[n+1];
  for(int i = 0;i < n;i++)
  {
     cin >> arr[i];
     if(arr[i] ==  0)a++;
     else b++;
  }
  for(int i = 0;i < n;i++)
  {
    if(arr[i] == 0)a--;
    else b--;
    if(b == 0 || a == 0)return cout << i + 1 << endl,0;

  }
}
