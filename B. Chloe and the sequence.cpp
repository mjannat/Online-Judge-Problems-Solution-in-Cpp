#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    long long l = pow(2,n) -1;
    long long mid, beg = 1 ,endd = l;
    if(k % 2 == 1)return cout << 1 << endl,0;
    while(1)
    {
        mid = (beg + endd) / 2;
        if(mid == k){cout << n << endl;break;}
        else if(mid > k)
        endd = mid - 1;
        else
            beg = mid + 1;
        n--;
    }

}
