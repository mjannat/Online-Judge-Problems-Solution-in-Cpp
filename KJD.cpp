#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char val = 'a';
    for(int  i = 0; i < str.size();i++)
    {
        if(val >='z')break;
        if(str[i] <= val)
        {
            str[i] = val;
            val++;
        }
    }
    if(val < 'z')cout << -1 << endl;
    else cout << str << endl;
return 0;
}

