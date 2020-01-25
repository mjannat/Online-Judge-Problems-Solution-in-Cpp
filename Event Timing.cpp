#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c, test,cs=1;
    cin >> test;
    while(test--)
    {
        cin >> a >> b >> c;
        cout << "Case " << cs++ << ": ";
        if(b < c)
        {
            cout << a + c << endl;
        }
       else
        {
            cout << a + (c * ((b / c) + 1))<< endl;
        }
    }
}
