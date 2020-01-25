#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int arr[n+1];
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int flag = 1,mn = arr[0];
        for(int i = 1; i < n; i++)
        {
            if(i <= 5)
            {
                for(int j = i - 1; j >= 0; j--)
                {
                    mn = min(arr[j],mn);
                }
                if(arr[i] < mn)
                    flag++;
                mn = 9999999999;
            }
            else
            {
                for(int j = i - 1; j > (i - 1) - 5; j--)
                {
                    mn = min(arr[j],mn);
                }
                if(arr[i] < mn)
                    flag++;
                mn = 9999999999;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}

