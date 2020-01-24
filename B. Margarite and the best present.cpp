#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        int b = (r + 1)/2;
        int a= l/2;
       if(r % 2 != 0) b = b * (-1);
       if(l % 2 == 0)a = a * (-1);
        cout << b - a << endl;
    }
}
