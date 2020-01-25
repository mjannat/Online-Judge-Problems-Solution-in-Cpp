#include<bits/stdc++.h>
using  namespace std;
void funct(int i, int j,int *n, int *a)
{
    if(i == *n)
    {
        *n = j;
        return;
    }
    if(a[i] % 2 == 0)a[j++] = a[i];
    funct(i+1, j, n, a);
}
int main()
{
int i, n, arr[100];
scanf("%d",&n);
for(int i = 0;i < n;i++)
{
    scanf("%d",&arr[i]);
}
funct(0, 0, &n, arr);
for(int i = 0;i < n;i++)
{
    printf("%d ",arr[i]);
}
}
