#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first[10][10],second[10][10],result[10][10];
    for(int i = 0; i < 2;i++)
    {
        for(int j = 0; j < 2;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    for(int i = 0; i < 2;i++)
    {
        for(int j = 0; j < 2;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < 2;i++)
    {
        for(int j = 0; j < 2;j++)
        {
            for(int k = 0; k < 2;k++)
        {
            sum += first[i][k] * second[k][j];

        }
        result[i][j] = sum;
        sum = 0;
        }
    }
    for(int i = 0; i < 2;i++)
    {
        for(int j = 0; j < 2;j++)
        {
           printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
