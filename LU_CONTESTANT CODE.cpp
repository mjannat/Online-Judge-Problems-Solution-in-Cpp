
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll test,cs = 1,val;
 scanf("%lld", &test);
 while( test-- )
 {
    ll a;
     string str, temp = "", pos = "";
    scanf("%lld",&a);
     vector< pair <ll,string> > v;
   for()int i = 0;i < a;i++){
        cin >> str >> val;
        v.push_back( make_pair(val , str) );
    }
    sort(v.begin(), v.end());
    a--;
   if(v[a].first >= 1600 && v[a].first <= 1899)pos =  "Expert";
   else if(v[a].first >= 1400 && v[a].first <= 1599)pos = "Specialist";
   else if(v[0].first >= 1200 && v[0].first <= 1399)pos = "Pupil";
   else pos = "Newbie";
   cout << "Case " << cs++ << ": " <<v[0].second << " is " << pos <<  "!.\n";
 }
}
