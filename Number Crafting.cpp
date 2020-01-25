#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int arr[n+1];
        int sum = 0, mn = INT_MAX, res = 0, f = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            sum += arr[i];
            mn = min(mn,arr[i]);
        }
        res = sum / mn;
        for(int  i = 0; i < n; i++)
        {
            if(arr[i] == res && f == 0)
            {
                cout << i + 1;
                f = 1;
            }
            else if(arr[i] == res)
            {
                 cout  <<" "<< i + 1;
            }
        }
        if(f == 0)cout << "NULL";
        cout << endl;
    }
}
