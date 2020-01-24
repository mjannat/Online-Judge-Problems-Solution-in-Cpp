#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 string str ,temp = "aeiouAEIOU";
 cin >> str;
 int cnt = 0;
for(int i = 0;i < str.size();i++)
{
   for(int j = 0;j < temp.size();j++)
{
  if(str[i] == temp[j])cnt++;
}
}
printf("%d\n",cnt);
}
