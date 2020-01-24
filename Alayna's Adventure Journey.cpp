#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n + 1];
 for(int i = 0;i < n;i++)scanf("%d",&arr[i]);
sort(arr,arr+n);
printf("%d",arr[n-1]);
}
