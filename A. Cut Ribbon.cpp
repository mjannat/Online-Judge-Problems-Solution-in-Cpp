#include<bits/stdc++.h>
using  namespace std;
int track[4001];
int main()
{
    int n, a, b, c, mx = -1;
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    track[arr[0]] = 1, track[arr[1]] = 1,track[arr[2]] = 1;
    sort(arr, arr + 3);
    for(int i = 0; i < 3; i++)
    {
     int tmp = n / arr[0];
     if(n % arr[i] == 0)mx = max(mx, n / arr[i]);
     else if(n % arr[i] != 0)
     {
         int m = -1;
         for(int j = arr[i] - 1; j >= 1; j--)
         {
          int val = j * arr[i];
          if(track[n - val] == 1)
         }
     }
    }
    cout << mx << endl;
}

38  5  7  9
38/5 = 4
18/9 = 2
