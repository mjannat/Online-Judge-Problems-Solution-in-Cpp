#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,cs = 1;
   scanf("%d",&test);
   while(test--)
   {
        string str, temp ="";
       cin >> str;
       temp += str;
       reverse(str.begin(),str.end());
       for(int i = 1; i < str.size();i++)
       {
           temp += str[i];
       }
       cout << "Case " << cs++ <<": " << temp << endl;
   }
}
