#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int>mp;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp[val]++;
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        if(mp[val] > 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}
