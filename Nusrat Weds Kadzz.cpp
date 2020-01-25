#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, val;
  cin >> n;
  map<int , int>mp;
  map<int , int>::iterator it;

  for(int i = 0; i < n; i++)
  {
    cin >> val;
    mp[val]++;
  }
  if(mp.size() == n)
  {
      cout << "Sorry Kadzz!\n";
  }
  else
  {
      int res = 0, flag = 0;
   for(it = mp.begin();it != mp.end();it++)
   {
     if(it->second == 1)
     {
         res = it -> first;
         flag++;
     }
   }
   if(flag == 1)
   {
       cout << res << "\n" << "Nusrat weds Kadzz!\n";
   }
   else
   {
       cout << "Sorry Kadzz!\n";
   }
  }

}
