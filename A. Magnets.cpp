#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt = 1;
    scanf("%d",&n);
    string prev,news;
    cin >> prev;
    for(int i = 0; i < n-1;i++)
    {
        cin >> news;
    if(prev[1] == news[0])cnt++;
    prev = news;
    }
    printf("%d\n",cnt);
}
