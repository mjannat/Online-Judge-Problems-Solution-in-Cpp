#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>vct;
vector<int>::iterator upper;
int bin_search(int low,int high,int n)
{
  int mid = low + high;
  if(arr[mid])
}

int main()
{
   ll n , q, temp, add =0;;
   cin >> n >> q;
   for(int i =0 ;i < n; i++)
   {
      cin >> temp;
      add += temp;
      vct.push_back(add);
   }

   while(q--)
   {
       cin >> temp;
       upper = lower_bound(vct.begin(),vct.end(),temp);
       cout << (upper - vct.begin())+ 1 << endl;
   }
}
