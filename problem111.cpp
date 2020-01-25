#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);

    int tmp = a * 60 + b;
    int tmp2 = c *60 + d;
    int tmp3 = (tmp + tmp2 )/ 2;
    int hour = tmp3 / 60;
    int minu = tmp3 % 60;
    if(hour < 10)cout << 0 << hour << ":";
    else cout << hour << ":";
    if(minu  < 10)cout << 0 << minu << endl;
    else cout << minu << endl;
    return 0;
}
