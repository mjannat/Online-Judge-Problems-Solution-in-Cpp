#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k= 0,val ;
    cin >> n;
    ll arr[n+1],newarr[n+1];
    ll sum = 0;
    for(ll i = 0; i < n; i++){
       cin >> val;
       if(val != 0) arr[k] = val,k++;
       sum+=val;
    }
    k=0;
    for(ll i = 0; i < k -1; i++){
        for(ll j = i + 1; j < k; j++){
            sum += (arr[i] | arr[j]);
            newarr[k]=arr[i] | arr[j];
            k++;
        }
    }
    ll temp = arr[0];
    for(ll i = 1; i < k; i++)
        temp = (temp |arr[i]);
    sum += temp;
    printf("%d\n", sum);
    return 0;
}
