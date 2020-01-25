#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0,c = 0,g = 0, t = 0,n;
    cin >> n;
    string str;
    string tmp = "";
    cin >> str;
    for(int  i = 0; i < str.size(); i++)
    {
        if(str[i] == 'A')a++;
        else if ( str[i] == 'C')c++;
        else if(str[i] == 'G')g++;
        else if(str[i] == 'T')t++;
    }
    int mx = max(a,c);
    mx = max(mx,g);
    mx = max(mx,t);
    if(mx > n/4.0 || n % 4 != 0 )return cout << "===\n",0;
    mx = n / 4;
    for(int  i = 0; i < str.size(); i++)
    {
        while(a != mx)tmp += 'A',a++;
        while(c != mx)tmp += 'C',c++;
        while(g != mx)tmp += 'G',g++;
        while(t != mx)tmp += 'T',t++;
    }
    int j = 0;
     for(int  i = 0; i < str.size(); i++)
    {
        if(str[i] == '?')str[i] = tmp[j++];

    }
    cout << str << endl;


}
