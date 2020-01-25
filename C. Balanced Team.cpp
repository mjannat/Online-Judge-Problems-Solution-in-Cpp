#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sfq scanf("%d",&q)
#define sfn scanf("%d",&n)

int main()
{
    int n, cnt = 1, mx = 0;
    sfn;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int tmp = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] - tmp <= 5) cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
            tmp = arr[i];
        }
    }
    cout << max(mx, cnt) << endl;
}
