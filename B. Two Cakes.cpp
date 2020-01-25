#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b,q;
    cin >> n >> a >> b;
    a = min(a,b);
    if(n % 2 == 0)q = n / 2;
    else  q = min(n / 2,(n - n / 2));
    cout << a / q << endl;
}
