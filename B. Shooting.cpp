#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int> >vct;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    vector<pair <int, int> >vct;
    int res[n+1];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        vct.push_back(make_pair(arr[i],i+1));
     }
    sort(arr,arr+n,greater<int>());
    sort(vct.begin(),vct.end());
    int sum = 1, x = 1;
    for(int i = 1; i < n; i++)
    {
        sum += (arr[i] * x) + 1;
        x++;
    }
    printf("%d\n",sum);
    int temp[n+1];
    for(int i  = 0; i < vct.size(); i++)
    {
       temp[i] = vct[i].second;
    }
    for(int i = n-1;i >= 0;i--)
    {
        printf("%d ",temp[i]);
    }
}
