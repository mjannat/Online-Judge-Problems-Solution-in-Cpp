#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int arr[n+1];
        string str,req;
        cin >> str;
        cin >> req;
        map<char , int>mp;
        for(int i = 0; i < str.size();i++)
        {
           mp[str[i]] = i ;
        }
        for(int  i = 0; i < req.size();i++)
        {
            if(str[i] != req[i])
            {
                vct.push_back(mp[req])
            }
        }
    }
}
