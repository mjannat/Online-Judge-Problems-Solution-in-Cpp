#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>vct;
    int val;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> val;
            if(i == j)vct.push_back(sqrt(val));
        }
    }
    for(int i = 0; i < vct.size(); i++)
    {
        if(i < n-1) cout <<vct[i] << " ";
        else cout << vct[i];
    }
    cout <<"\n";
}


