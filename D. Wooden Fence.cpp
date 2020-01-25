#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n, x, y;
        scanf("%d %d %d",&n,&x,&y);
        if(x >= (n / 2 + 1) && y >=(n / 2))
        {
            printf("YES\n");
        }
        else
        {
          printf("NO\n");
        }
    }
}
