#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    int cnt = 1;
    vector <int> v;
    int i;
    for(i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1]) cnt++;
        else
        {
            v.push_back(cnt);
            v.push_back(arr[i-1]);
            cnt = 1;
        }
    }
    v.push_back(cnt);
    v.push_back(arr[i-1]);
    for(int i = 0; i < v.size()-1; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}
