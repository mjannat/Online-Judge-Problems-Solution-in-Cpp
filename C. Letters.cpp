#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,tmp = 0,a;
    cin >> n >> m;
    vector<ll>v;
    vector<ll> :: iterator it;
    for(ll i = 0; i < n; i++)
    {
        cin >> a;
         tmp += a;
        v.push_back(tmp);

    }
    for(ll i = 0; i < m; i++)
    {
       cin >> a;
       it = lower_bound(v.begin(), v.end(), a);
       ll index = it - v.begin();
       if(index == 0)cout << index+1 << " " << a << endl;
       else cout << index+1 << " " << a - v[index - 1] << endl;

    }


}
