#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    cin >> test;
    while( test-- )
    {
        int n, m;
        cin >> n >> m;
        cout << "Case "<< cs++ << ": " << n + m << abs(n - m) << endl;
    }
}
