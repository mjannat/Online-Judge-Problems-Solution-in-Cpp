#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cs = 1;
    cin >> test;
    int n;
    while(test--)
    {
        cin >> n;
        int arr[n+1];
        for(int i = 0;i < n; i++)cin >> arr[i];
        sort(arr,arr+n);
        int temp = n/2;
        cout <<"Case " << cs++ <<": " << arr[n/2] <<endl;
    }
    return 0;
}

