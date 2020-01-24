
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cs = 1;
    scanf("%d",&test);
    while(test--)
    {
        int n,d,cnt = 0,tmp= 0,mx = -1;
        scanf("%d",&n);
        int arr[n+1];
        for(int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        tmp = arr[0];
        cnt++;
        for(int i = 1; i < n; i++)
        {
            if(tmp == arr[i])
            {
                cnt++;
            }
            else
            {
                mx = max(mx, cnt);
                cnt = 1;
                tmp = arr[i];
            }
        }
         mx = max(mx, cnt);
            printf("Case %d: %d\n",cs++,mx);
        }
    }
