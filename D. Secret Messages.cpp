#include<bits/stdc++.h>
using namespace std;
int main()
{
 int test;
 cin >> test;
 while(test--)
 {
     string str, temp = "";
     cin >> str;
     for(int i = 0; i < str.size();i++)
     {
    if(isupper(str[i]))temp+=tolower(str[i]);
    else if(islower(str[i]))temp+=toupper(str[i]);}
    reverse(temp.begin(),temp.end());
    str = "";
    for(int i = 0; i < temp.size();i++)
    {
     if(isupper(temp[i]))
     {
         int val = temp[i];
         if(val+13>90)
         {
             val = 90 - val;
             val = 13 - val;
             str += 65 + val - 1;
         }
         else str+=val+13;
     }
     else if(islower(temp[i]))
     {
         int val = temp[i];
         if(val+13>122)
         {
             val = 122 - val;
             val = 13 - val;
             str += 97 + val - 1;
         }
         else str+=val+13;
     }
    }
    cout << str << endl;
 }
}
