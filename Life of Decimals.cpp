#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll test;
 string str = "141592653589793238462643";
 scanf("%lld", &test);
 while( test-- )
 {
     ll a;
    scanf("%lld", &a);
     cout << str[a - 1] << endl;
 }
}
