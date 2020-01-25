#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int row,col,q;
        scanf("%d %d %d",&row,&col,&q);
        int arr[row+1][col+1];
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                arr[i][j] = 0;
            }
        }
        while(q--)
        {
            int a, b;
            scanf("%d %d",&a, &b);
            for(int i = a - 1; ; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    arr[i][j]++;
                }
                break;
            }
            for(int i = b - 1; ; i++)
            {
                for(int j = 0; j < row; j++)
                {
                    arr[j][i]++;
                }
                break;
            }
            for(int i = 0; i < row; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    cout << arr[i][j] << " ";
                }

                cout << endl;
            }
        }
            int flag = 0;
            for(int i = 0; i < row; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    if(arr[i][j] % 2 == 1)flag++;
                }
            }
            printf("%d\n",flag);
        }
        return 0;
    }
