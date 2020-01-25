#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int arr[n+1], ans = 0, f = 0;
        for(int i = 1; i < n; i++)
        {
          cin >> arr[i];
          if(arr[i] != i&& f == 0)ans = i,f = 1;
        }
        if(f == 0)cout << n << endl;
        else cout << ans << endl;
    }
}

