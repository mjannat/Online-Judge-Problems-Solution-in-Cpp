#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, sum = 0;
     cin >> m >> n;
    int arr[m+5];
     for (int i = 0; i < m; i++) cin >> arr[i];
     sort(arr,arr+m);
     for (int i = 0; i < n; i++)
     {
         if(arr[i] > 0)break;
         sum += arr[i];
     }
     cout << abs(sum) << endl;

}
