#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int f = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a == b) cout << "Yes\n";
    else cout << "No\n";
}
