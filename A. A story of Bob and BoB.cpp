#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n , a, b, c, d;
        scanf("%d %d %d %d %d",&n, &a, &b, &c, &d);
        int sum = 0;
        sum = a + b + c + d;
        n++;
        if(n % 2 == 0)
        {
            if(sum >= n / 2)printf("Yes\n");
            else printf("No\n");
        }
        else if(n % 2 == 1)
        {
            if(sum >= (n / 2 + 1))printf("Yes\n");
            else printf("No\n");
        }
        else
        {
          printf("No\n");
        }
    }
    return 0;
}
