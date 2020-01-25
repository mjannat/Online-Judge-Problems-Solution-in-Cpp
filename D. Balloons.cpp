#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int  test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b,cnt = 0;
        scanf("%d",&a);
        for(int i = 0;i < a;i++)
        {
            cin >> b;
            if(b != 0)cnt++;
        }
       printf("%d\n",cnt);
    }

}
