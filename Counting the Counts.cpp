#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0,n,val;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
     cin >> val;
     if(val >= 80)cnt++;
    }
    cout << cnt << endl;
}
