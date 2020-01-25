#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a,b,c = "";
  cin >> a >> b;
    for(int i = 0;i < a.size();i++)
    {
        if(a[i] < b[i])
        {
            cout << -1 << endl;
            return 0;
        }
        if(a[i] == b[i])c+='z';
        else c+=b[i];
    }
    cout << c << endl;
}
