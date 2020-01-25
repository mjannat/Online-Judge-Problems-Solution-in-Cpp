#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cs = 1;
    scanf("%d",&test);
    while(test--)
    {
        int n,d,val,sum = 0;
        scanf("%d %d",&n, &d);
        for(int i = 0; i < 7; i++)
        {
         scanf("%d",&val);
         sum += val;
        }
        n = n - sum;
        printf("Case %d: %d\n",cs++,n);
    }
}
