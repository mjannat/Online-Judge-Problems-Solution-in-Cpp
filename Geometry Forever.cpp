#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,cnt = 0;
    cin >> a >>b;
    for(int i = abs(a-b); i <=a + b; i++)
    {
        if(a + b > i && b + i > a && i + a > b)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
