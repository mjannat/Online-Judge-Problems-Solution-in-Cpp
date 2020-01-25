#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string a, string b)
{
    if(a.size() != b.size())return a.size() < b.size();
    else a < b;
}
int main()
{

    ll n;
    string arr[10000];
    cin >> n;
    for(int i = 0; i < n;i++) cin >> arr[i];

    sort(arr,arr+n,cmp);

    for(int i = 0; i < n-1;i++)
    {
       if(arr[i + 1].find(arr[i]) == -1)return cout << "NO\n",0;
    }
    cout << "YES\n";
    for(int i = 0; i < n;i++) cout << arr[i] << endl;
    return 0;
}
