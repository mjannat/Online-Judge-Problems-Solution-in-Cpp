#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a + c > b + d)
        {
            printf("AUSTRALIA\n");
        }
        else if(a + c <  b + d)
        {
            printf("ENGLAND\n");
        }
        else
        {
            printf("TIE\n");
        }
    }
}
