#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        map <int,int>mp;
        sort(arr, arr+n);
        mp[arr[n-1]]++;
        cout << arr[n-1] << " ";
        for(int j = 0; j < n-1; j++)
        {
            if((arr[n-1] % arr[j] == 0) && mp[arr[j]] != 1)
            {
                mp[arr[j]]++;
               arr[j] = 0;
            }
        }
         arr[n-1] = 0;
        sort(arr,arr+n);
        cout << arr[n-1] << endl;

    return 0;
}