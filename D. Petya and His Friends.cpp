#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=1;
    cin >> n;
    if(n > 2)
    {
        cout << 10 <<"\n"<< 15 <<endl;
        for(int i = 3;i <= n;i++)cout << 6 * j++ << endl;
    }
    else cout << -1 << endl;
}
