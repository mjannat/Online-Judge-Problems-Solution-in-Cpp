#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,res="";
    cin >> str;
    for(int i = 0;i < str.size();)
    {
        if(str[i] == '.')
        {
            res+='0';
            i++;
        }
        else if(str[i] == '-')
        {
            if(str[i+1] == '-')res+='2';
            else res+='1';
            i+=2;
        }
    }
     cout << res << endl;
}
