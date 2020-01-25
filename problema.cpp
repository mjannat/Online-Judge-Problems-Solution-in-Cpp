#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr,arr+4);
    cout << arr[3] - arr[0] <<" " <<arr[3] - arr[1]<< " " << arr[3] - arr[2] << endl;
    return 0;
}
