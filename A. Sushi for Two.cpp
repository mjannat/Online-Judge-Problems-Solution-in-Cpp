#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx = 0,tmp;
    bool o,t;
    cin >> n;
    int arr[n+1],one = 1,two = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1])one++;
        else
        {
            two = one;
            one = 1;
        }
        tmp = min(one,two);
        mx = max(mx,tmp*2);

    }
    cout << mx << endl;
}
