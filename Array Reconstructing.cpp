#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    int n, mod;
    while(test--)
    {
        scanf("%d%d",&n,&mod);
        int arr[n+1];

        for(int i = 1; i <= n ; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i] == -1 && arr[i-1] != -1 && i != 1)
            {
                arr[i] = (arr[i-1]+1)% mod;
            }
        }
        if(arr[1] == -1)
        {
            for(int i = n; i >= 1 ; i--)
            {
                if(arr[i] ==  -1)
                {
                    arr[i] = (arr[i+1]-1)% mod;
                    if(arr[i] < 0)arr[i]+=mod;
                }
            }
        }
        for(int i = 1; i <= n ; i++)
        {
            if(i < n)printf("%d ",arr[i]);
            else  printf("%d\n",arr[i]);
        }

    }
}
