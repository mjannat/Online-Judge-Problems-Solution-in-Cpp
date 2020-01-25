#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll k, p, n,j = 0, sum = 0;
        cin >> n >> k;
        int arr[n * 3 + 10], temp[4];
        for(int i = 0; i < n;i++)
        {
            cin >> temp[0] >> temp[1] >> temp[2];
            sort(temp,temp+3);
            arr[j++] = temp[0];
            arr[j++] = temp[1];
        }
        cout << j << endl;
        sort(arr,arr+j);
        for(int i = 0;i < k;i++)sum+=arr[i];
        cout << sum << endl;
    }
}

