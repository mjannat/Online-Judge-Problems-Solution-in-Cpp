#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0,mx = 0, mn = 0;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)cin >> arr[i];
    mx = arr[0],mn = arr[0];
    for(int i = 1; i < n; i++)
    {
      if(arr[i] > mx)cnt++;
      mx = max(arr[i],mx);
    }
    for(int i = 1; i < n; i++)
    {
      if(arr[i] < mn)cnt++;
      mn = min(arr[i],mn);
    }
    cout << cnt << endl;
}
