#include<bits/stdc++.h>
using namespace std;
int arr[100003];
int store[100003];
int main()
{
  int n,i = 0;
  while(cin >> n)
  {
     if(arr[n] == 0)store[i++] = n;
     arr[n]++;
  }
  for(int j = 0;j < i;j++)
    cout << store[j] <<" " << arr[store[j]] << endl;
}
