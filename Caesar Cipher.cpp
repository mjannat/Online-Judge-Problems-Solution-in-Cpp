#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    getchar();
    getline(cin,str);
    for(int i = 0;i < str.size();i++)
    {
        if(str[i] == ' ')printf("%c",' ');
        else if(str[i] - n < 97)
        {
           int  tmp = n -(str[i] - 97);
           printf("%c",123 - tmp);
        }
        else printf("%c",str[i] - n);
    }
}
