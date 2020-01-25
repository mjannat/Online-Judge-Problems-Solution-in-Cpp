#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int f = 0;
    char a = 'a';
   int  b = 0;
       for(int i = 0;i < str.size();i++)
       {
         if(str[i] <= a && a <= 'z')
             str[i] = a++;
       }
       if(a <='z' )cout << -1 << endl;
       else cout << str << endl;
    return 0;
}
