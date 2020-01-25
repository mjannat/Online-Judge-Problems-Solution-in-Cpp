#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, mn= 99999999999999999, mx = -1;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mx = max(mx,arr[i]);
      mn = min(mn,arr[i]);
    }
    int a = mx - mn, ans;
    if(a % 2 == 0)a/=2;
    for(int i = 0;i < n ; i++)
    {
        if(arr[i] != mn + a && arr[i] != mn && arr[i]!=mx)
        {
            a = -1;
            break;
        }
    }
    cout << a << endl;
}
