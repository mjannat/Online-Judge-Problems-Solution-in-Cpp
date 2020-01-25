#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull russianPeasant(ull a, ull b, ull c) {
    ull ret=0;
    while(b) {
        if(b&1) {
            ret += a;
            ret %= c;
        }
        a *= 2;
        a %= c;
        b /= 2;
    }
    return ret;
}
int main()
{
    ull a,b,c;
    cin >> a >> b >> c;
    ull res = russianPeasant(a,b,c);
    cout << res << endl;
}
