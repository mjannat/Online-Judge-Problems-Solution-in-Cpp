#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,res;
    cin >> n;
    for(double  i = 1;i <= 18;i++)
    {
        long long  tmp = (pow(2,i)-1) * pow(2,(i -1));
        if(n % tmp == 0)res = tmp;
        if(tmp >= n)break;
    }
    cout << res << endl;
}
