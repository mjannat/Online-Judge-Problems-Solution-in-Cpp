#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll d;
    ll oc,of,od,cs,cb,cm,cd;
    cin >> d >> oc >> of >> od >> cs >> cb >> cm >> cd;
    ll  onlineTaxi = 0;
    ll classicTaxi = 0;

    if(d <= of)onlineTaxi = oc;
    else
    {
        onlineTaxi = oc + ((d - of) * od);
   }
     classicTaxi = cs + (d / cm) + (cd * d);
     if(onlineTaxi <= classicTaxi)
     {
         printf("Online Taxi\n");
     }
     else{
        printf("Classic Taxi\n");
     }
    return 0;
}
