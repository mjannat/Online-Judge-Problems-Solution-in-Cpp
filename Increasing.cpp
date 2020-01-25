#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll test[2000005];
set<ll>incre;
set<ll>decre;
set<ll>::iterator it;
set<ll>::reverse_iterator rit;
int main()
{
    ll n,f = 0;
    cin >> n;
    ll arr[n+1];
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        test[arr[i]]++;
        if(test[arr[i]] > 2)f = 1;
    }
    if (f == 1) return cout << "NO\n", 0;
    if(n == 1)
    {
        cout << "YES\n";
        cout << 1 << endl;
        cout << arr[0] << endl;
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < n; i++)
        if(test[arr[i]] == 2)
        {
            incre.insert(arr[i]);
            decre.insert(arr[i]);
            test[arr[i]] = -1;
        }
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)
    {
        if(i < n / 2 && test[arr[i]] != -1)incre.insert(arr[i]);
        else if(test[arr[i]] != -1)decre.insert(arr[i]);
    }
    cout << "YES\n";
    cout << incre.size() << endl;
    for( it = incre.begin(); it != incre.end(); it++)
        cout << *it << " ";
    cout << endl;
    cout << decre.size() << endl;
    for( rit = decre.rbegin(); rit != decre.rend(); rit++)
        cout << *rit << " ";

    return 0;
}
