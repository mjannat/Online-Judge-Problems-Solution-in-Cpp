#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int len,flag = 0;
        cin >> len;
        string str, temp = "";
        cin >> str;
        map<char, int>mp;
        map<char, int>:: iterator it;
        for(int i = 0; i < str.size(); i++) mp[str[i]]++;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second % 2 == 1) flag++;
            int run = it->second / 2;
            while(run--)temp += it->first;
        }
        int res = 0;
        do
        {
            ++res;
        }
        while (next_permutation(temp.begin(), temp.end()));
        if(flag >= 2)cout << 0 << endl;
        else cout << res << endl;
    }
    return 0;
}
