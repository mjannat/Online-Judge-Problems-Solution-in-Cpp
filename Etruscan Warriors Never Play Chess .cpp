#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    double n;
    while(test--)
    {
        cin >> n;
        cout << (long long)((-1+sqrt(1 + 8*n))/2) << endl;
    }
    return 0;
}
