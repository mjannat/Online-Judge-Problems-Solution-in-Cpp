#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, j = 0;
   scanf("%d",&n);
   string str;
   cin >> str;
   for(int i = 0; i < str.size();i+=j)
   {
       printf("%c",str[i]);
       j++;
   }
}
