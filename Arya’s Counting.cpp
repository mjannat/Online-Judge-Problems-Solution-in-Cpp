#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    cin >> test;
    while(test--)
    {
        int a, b, c;
        char val;
        cin >> a >> b >> c;
        cout << "Case " << cs++ << ": ";
             if(a > b && a > c)cout << 'A' << endl;
        else if(b > a && b > c)cout << 'B' << endl;
        else if(c > a && c > b)cout << 'C' << endl;
        else cout << "Confused" << endl;

    }
}
