#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test,cs = 1,val;
    scanf("%lld", &test);
    while( test-- )
    {
        map<string, ll > mp;
        map<string,ll > ::iterator it;
        string str,pos, temp = "";
        ll val,n,res = -1;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> str >> val;
            mp[str] = val;
            res = max(res,val);
        }
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == res)
            {
                temp = it -> first;
                break;
            }

        }
        if(res >= 1600 && res <= 1899)pos =  "Expert";
        else if(res >= 1400 && res <= 1599)pos = "Specialist";
        else if(res >= 1200 && res <= 1399)pos = "Pupil";
        else pos = "Newbie";
        cout << "Case " << cs++ << ": " <<temp << " is " << pos <<  "!.\n";

    }
}
