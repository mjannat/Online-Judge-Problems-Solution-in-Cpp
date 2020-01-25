#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int main()
{
    int n, m,a, b;
    scanf("%d %d",&n, &m);
    while(m--)
    {
        scanf("%d %d",&a, &b);
        if(arr[a][b] == 1 || arr[b][a] == 1)printf("old\n");
        else
        {
            printf("new\n");
            arr[a][b] = 1;
            arr[b][a] = 1;
        }
    }
}
