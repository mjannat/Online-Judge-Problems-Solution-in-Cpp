#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   string str;
   cin >> str;
   str[0] -= 32;
   cout << str[0];
   for(int i = 1;i < str.size();i++)
   {
       if(str[i] == 's')cout << '$';
       else if(str[i] == 'i')cout << '!';
       else if(str[i] == 'o')cout << "()";
       else cout << str[i];
   }
   cout << '.' << endl;
}


