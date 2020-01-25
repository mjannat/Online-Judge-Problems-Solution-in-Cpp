#include<bits/stdc++.h>
using namespace std;
#define maxn 100004
bool is_prime(int n) {
    if (n == 1) {
        return false;
    }

    int i = 2;
    while (i*i <= n) {
        // Check if i divides x without leaving a remainder
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}

int main()
{
    char c;
    int test,val,cs = 1;
    string str;
    cin >> test;
    while(test--)
    {
        map<char,int>mp;
        map<char,int> :: iterator it;
        cin >> val >> str;
        for(int i = 0; i < val; i++)mp[str[i]]++;
        cout <<"Case " << cs++ <<  ":\n";
        int flag = 1,f = 0;
        for(it = mp.begin(); it != mp.end(); it++)
            if(is_prime(it->second))f++;
        if(!f)cout << "Love is painful !\n";
        else
        {
            for(it = mp.begin(); it != mp.end(); it++)
                if(is_prime(it->second) == true)cout << it->first <<" = " << it->second << endl;
        }

    }
}
