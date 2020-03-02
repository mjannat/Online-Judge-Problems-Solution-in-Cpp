#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, char>mp;
    for(int i = 97, j = 122; i <= 109; i++,j--)
    {
        mp[i] = j;
        mp[j] = i;
    }
    int test,len;
    cin >> test;
    while(test--)
    {
        string str;
        cin >> len;
        cin >> str;
        if(len % 2 == 1)len--;
        for(int i = 0; i < len; i+=2)
        {
          swap(str[i],str[i+1]);
        }
        for(int i = 0; i < str.size();i++){
            str[i] = mp[str[i]];
        }
      cout << str << endl;
    }
}
