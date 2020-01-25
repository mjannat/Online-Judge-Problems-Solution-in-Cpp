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
        int flag = 1;
        int mn = arr[0];
        for(int i = 1; i < n; i++)
        {
            if(i  > 1)mn = 999999999;
            if(i >= 6)
            {
                for(int j = i - 1; j >= 0; j--)
                {
                    mn = min(mn,arr[j]);
                }
                if(arr[i] < mn)
                    flag++;
            }
            else
            {
                for(int j = i - 1; j >= ((i - 1) - 5); j--)
                {
                    mn = min(mn,arr[j]);
                    cout << j <<endl;
                }
                if(arr[i] < mn)
                    flag++;
            }
        }
        printf("%d\n",flag);

    }
    return 0;
}
