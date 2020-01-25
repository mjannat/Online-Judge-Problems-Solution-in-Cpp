#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,q,res1 = 0,res2 = 0;
    cin >> q;
    while( q-- )
    {
        cin >> n >> a >> b;
        res1 = n*a;

        long long tmp = n%2;
        res2 = ((n/2)*b) + (tmp * a);

    if(res1 < res2) cout << res1 <<endl;
    else cout << res2 <<endl;
}
return 0;

}

