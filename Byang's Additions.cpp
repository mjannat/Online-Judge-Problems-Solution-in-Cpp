#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, sum;
    cin >> a >> b;
    while(a && b)
    {
        sum = (a % 10) + (b % 10);
        if(sum > 9)return cout << "Yes\n",0;
        a /= 10,b /= 10;

    }
    cout << "N0\n";
}
