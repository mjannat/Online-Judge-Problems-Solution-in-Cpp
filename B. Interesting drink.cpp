#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000006
vector<int>vct;
vector<int>::iterator upper;
int main()
{
    int n,q,val;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> val;
        vct.push_back(val);
    }
    sort(vct.begin(),vct.end());
    cin >> q;
    while(q--)
    {
        cin >> val;
       upper = upper_bound(vct.begin(),vct.end(),val);
        cout << (upper - vct.begin()) << endl;
    }
}

