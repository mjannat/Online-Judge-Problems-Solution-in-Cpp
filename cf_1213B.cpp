#include <bits/stdc++.h.>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n+1], mn = INT_MAX, ans = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for(int i = n; i > 0; i--)
        {
            if(arr[i] > mn)
            {
                ans++;
            }
            mn = min(mn, arr[i]);
        }
        cout << ans << endl;
    }
}
