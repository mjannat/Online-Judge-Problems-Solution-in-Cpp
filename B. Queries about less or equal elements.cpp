#include<bits/stdc++.h>
using namespace std;
vector<int>vct;
vector<int>::iterator upper;
int main()
{
    int n,m,val;
    cin >> n >> m;
    int arr2[m+1];
    for(int i = 0; i < n; i++)
    {
        cin >> val;
        vct.push_back(val);
    }
    for(int i = 0; i < m; i++)cin >> arr2[i];
    sort(vct.begin(),vct.end());

    for(int i = 0; i < m; i++)
    {
        upper = upper_bound(vct.begin(),vct.end(),arr2[i]);
        cout << (upper - vct.begin()) << " ";
    }

}
