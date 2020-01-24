#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  string str1,str2;
  cin >> str1 >> str2;
  int len1 = str1.size();
  int len2 = str2.size();
  int c = 0;
  int a = len1 - 1,b = len2 - 1;
  for(int i = min(len1,len2)-1;i >= 0;i--)
  {
      if(str1[a--] == str2[b--])c++;
      else break;
  }
   int tmp = (len1 - c) + (len2 - c);
   cout << tmp << endl;
}
