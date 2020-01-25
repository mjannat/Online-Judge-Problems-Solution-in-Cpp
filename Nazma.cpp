#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum = 0;
    float aver;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
        aver=(sum / (float)(i+1));
        printf("%.5f\n",aver);
    }


    return 0;
}


