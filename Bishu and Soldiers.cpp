#include<bits/stdc++.h>
using namespace std;
typedef long long ll  ;
ll  arr[200000];
ll  tmp[200000];
ll   binarysearch(ll  beg,ll  endd,ll  x)
{
    if(endd >= beg)
    {
        ll  mid = (beg + endd)/2;

        if(arr[mid] == x)return mid;
        if(arr[mid] > x)return binarysearch(beg,mid-1,x);
        return binarysearch(mid+1,endd,x);
    }
    return -1;
}
int  main()
{
    ll  n;
    cin >> n;
    for(ll  i = 0; i < n; i++)cin >> arr[i];
    sort(arr,arr+n);
    for(ll  i = 0; i < n; i++)
    {
        if(i == 0)tmp[i] = arr[i];
        else tmp[i]=arr[i] + tmp[i-1];
    }
    ll  query;
    cin >> query;
    while(query--)
    {
        ll  cnt = 0,val;
        cin >> val;
        if(val >= arr[n-1])cout << n << " " << tmp[n-1] << endl;
        else
        {
            ll  ind = binarysearch(0,n-1,val);
            cout << ind + 1 << " " << tmp[ind] << endl;

        }
    }

}
