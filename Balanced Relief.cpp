#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1000005], arr2[1000005];
int main()
{
    ll n, m, l, r, ans = 0;
    cin >> n >> m;

    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cin >> l >> r;
    sort(arr2, arr2+m);
    sort(arr, arr+n);
    for(ll i = 0; i < n; i++)
    {
        ll num1 = l - arr[i];
        ll num2 = r - arr[i];

        ll r1 = lower_bound(arr2, arr2+m, num1) - arr2;
        ll r2 = upper_bound(arr2, arr2+m, num2) - arr2;

        ans += (r2 - r1);
    }
    cout << ans << endl;
}
