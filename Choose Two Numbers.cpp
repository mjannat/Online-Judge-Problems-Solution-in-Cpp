#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  int arr[1000],brr[1000];
  set<int>a,b;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
     cin >> arr[i];

     a.insert(arr[i]);
  }
  cin >> m;
  for(int i = 0; i < m; i++)
  {
     cin >> brr[i];
     a.insert(brr[i]);
  }
  for(int i = 0; i < n;i++)
  {
     for(int j = 0; j < m;j++)
  {
    if(!(a.count(arr[i] + brr[j])))
    {
        cout << arr[i] <<" " << brr[j] << endl;
        return 0;
    }
  }
  }
}
