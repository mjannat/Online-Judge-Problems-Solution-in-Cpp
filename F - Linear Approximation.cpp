
#include <bits/stdc++.h>
using namespace std;

 int main()
{
//    long long n, k, c = 0, i,sum = 0;
//    cin >> n ;
//    long long arr[n + 1];
//    for(int i = 0;i < n; i++)
//    cin >> arr[i];
//    int j = 1;
//     for(int i = 0 ;i < n; i++)
//     {
//        sum += abs(arr[i] - ( -3 + j++));
//     }
//     cout << sum << endl;
        long long a=12,b=15,c=140;
        cout<<__gcd(a,b)<<endl;
        cout<<__gcd(__gcd(a,b),c)<<endl;
        cout<<__gcd(b,c)<<endl;
}
