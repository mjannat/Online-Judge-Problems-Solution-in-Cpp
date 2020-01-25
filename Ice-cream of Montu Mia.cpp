#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mn = 9999999999,a , b, c;
    cin >> n >> a >> b >> c;
    mn = min(a,b);
    mn = min(mn,c);
    if(n - mn >= 10)
    {
        cout << "Yes :-D" << endl;
    }
    else{
        cout << "No :-(" << endl;
    }
}
