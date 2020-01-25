
#include <bits/stdc++.h>
using namespace std;

/// Typedef
typedef long long           ll;
typedef unsigned long long  ull;
typedef double              dd;

#define pb                  push_back
#define ppb                 pop_back
#define ff                  first
#define ss                  second
#define sf                  scanf
#define pf                  printf
#define SQR(x)              ((x)*(x))
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define read()              freopen("C:\\Users\\SAJOL\\Desktop\\CODE\\IN.txt","r",stdin)
#define write()             freopen("C:\\Users\\SAJOL\\Desktop\\CODE\\OUT.txt","w",stdout)




/// Constants
#define MAX                 10000007
#define PI                  acos(-1.0)  // 3.1415926535897932


//input output
void File_IO (){freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);}


//loop print
#define READ(a,n) for(int i=0;i<n;i++){pf("%d",a[i]);if(i==n-1)pf("\n");else pf(" ");}

//vector print
//#define VREAD(v) for(const auto &value : v)cout<<value<< ' ';
#define VREAD(v) for(int i=0;i<v.size();i++){pf("%d",v[i]);if(i==n-1)pf("\n");else pf(" ");}


int main()
{

  //File_IO();
  int t;
  sf("%d",&t);
  for(int k=1;k<=t;k++){
    int n;
    sf("%d",&n);
    ll a[n];
    pf("Case %d: ",k);
    ll mx=0;

    for(int i=0;i<n;i++){
        sf("%lld",&a[i]);

        if(i!=0){
            ll diff=a[i]-a[i-1];
            if(diff==mx)mx++;
            mx=max(mx,diff);
        }
        else {
            mx=a[i];
        }
    }
    pf("%lld\n",mx);
  }




}
