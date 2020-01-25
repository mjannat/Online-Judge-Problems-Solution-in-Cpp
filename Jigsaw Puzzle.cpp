#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour, minn, x;
    scanf("%d:%d %d",&hour,&minn,&x);
    if(x >= (60-minn))
    {
        hour++;
        x -= (60-minn);
        minn = 0;
    }
    else
    {
        minn += x;
        x = 0;
    }
    if(x > 0)
    {
        hour += (x / 60);
        minn += (x % 60);
    }
    if((hour <= 11 && minn <= 15)|| hour < 11)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
