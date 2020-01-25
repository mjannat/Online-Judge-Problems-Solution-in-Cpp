#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    char arr[a+1][b+1];
    getchar();
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            scanf("%c",&arr[i][j]);
        }
        getchar();
    }
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            int cnt = 0;
            if(arr[i][j] == '.')
            {
                if(i - 1 > 0 && j - 1 > 0 && arr[i-1][j-1] == '*')cnt++;
                if(j - 1 > 0 && arr[i][j-1] == '*')cnt++;
                if(i + 1 <= a && j -1 > 0 && arr[i+1][j-1] == '*')cnt++;
                if(i - 1 > 0 && arr[i - 1][j] == '*')cnt++;
                if(i + 1 <= a && arr[i+1][j] == '*')cnt++;
                if(i - 1 > 0 && j + 1 <= b && arr[i - 1][j + 1] == '*')cnt++;
                if(j + 1 <= b && arr[i][j+1] == '*')cnt++;
                if(i + 1 <= a && j + 1 <= b && arr[i+1][j+1] == '*')cnt++;
            }
            if(cnt > 0)
            {
                arr[i][j] = cnt + '0';
            }
        }

    }
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }

}
