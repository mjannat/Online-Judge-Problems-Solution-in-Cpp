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
        cout << a + (ceil(b/(double)c) * (c * 1.0)) << endl;
    }
}
