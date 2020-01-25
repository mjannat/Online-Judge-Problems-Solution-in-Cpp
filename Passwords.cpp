#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
    while(cin >> str)
    {
       int upper = 0, lower = 0, digit = 0,res = 0;
       for(int i = 0; i < str.size();i++)
       {
           if(str[i] >= 'A' && str[i] <= 'Z')upper++;
           else if(str[i] >= 'a' && str[i] <= 'z')lower++;
           else if(str[i] >= '0' && str[i] <= '9')digit++;
           if(upper && lower && digit)
           {
               res++;
               upper = 0, lower = 0, digit = 0;
           }
       }
       printf("%d\n",res);
    }
}

