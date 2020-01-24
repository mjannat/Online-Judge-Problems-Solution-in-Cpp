#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,freq;
        scanf("%d",&n);
        map<int,int>mp;
        map<int,int> :: iterator it;
        while(n--)
        {
            string str;
            cin >> str >> freq;
            mp[freq]++;
        }
        int mx = -1;
        int res;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > mx)
            {
                mx = it->second;
                res = it->first;
            }
        }
        cout << res << endl;

    }
}
