#include <bits/stdc++.h>
using namespace std;
unsigned int  phi(unsigned int n)
{
    unsigned int result = 1;
    for (unsigned int i = 2; i < n; i++)
        if (__gcd(i, n) == 1)
            result++;
   if(n == 1)return 1;
   else return result;
}
int main()
{
    unsigned int  a,b,res1 = 0,res2 = 0;
    cin >> a >> b;
    cout << phi(a) << " ";
    cout << phi(b) << " ";
    cout << phi(a) *phi(b) << endl;
    return 0;
}
