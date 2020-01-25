#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string str,temp ="";
        vector< int >posv;
        int pos;
        char  ch = str[0];
        cin >> str;
        temp += str;
        sort(temp.begin(),temp.end());
        if(ch != temp[0])
        {
            for(int i = 1; i < str.size(); i++)if(str[i] == temp[0])posv.push_back(i);
            for(int i = 0; i < posv.size(); i++)str[posv[i]] = str[0];
            posv.clear();
            for(int i = 1; i < str.size(); i++)if(str[i] == temp[0])posv.push_back(i);
            for(int i = 0; i < posv.size(); i++)str[posv[i]] = temp[0];

            str[0] = temp[0];
        }
        cout << str << endl;
    }
}
