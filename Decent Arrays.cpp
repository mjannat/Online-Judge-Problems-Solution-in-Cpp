#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f = 0;
    cin >> n;
    int val,temp = -1;
    for(int i = 0; i < n;i++)
    {
        cin >> val;
       if(temp > val)f = 1;
       temp = val;
    }
    if(f == 1)cout << "No\n";
    else cout << "Yes\n";
    return 0;
}
