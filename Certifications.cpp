#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,val;
    cin >> n;
    vector< int >offer;
    for(int i = 0; i < n; i++)
    {
        cin >> val;
            offer.push_back(val);
    }
    cin >> m;
    int lec[m+1];
    for(int i = 0; i < m; i++)cin  >> lec[i];
    sort(offer.begin(),offer.end());
    vector<int> :: iterator it;
    for(int i = 0; i < m; i++)
    {
        int res;
        it = upper_bound (offer.begin(), offer.end(), lec[i]);
        res = it - offer.begin();
        if(offer[res] < lec[i] )
        {
            cout << "Dr. Samer cannot take any offer :(.\n";
        }
        else if(res > 0 && offer[res-1] >= lec[i])
        {
            cout << offer[res-1] << endl;
        }
        else cout << offer[res] << endl;
    }
    return 0;
}
