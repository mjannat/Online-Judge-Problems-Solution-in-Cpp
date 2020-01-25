#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < ll >v;
int main()
{
    ll test,cs = 1;
    scanf("%lld",&test);
    while(test--)
    {
        ll p, l;
        scanf("%lld %lld",&p,&l);
        p = p - l;
        for(ll i =1; i*i<=p; i++)
        {
            if(p%i==0)
            {
                if(i*i!=p)
                {
                    if(i>l)
                        v.push_back(i);
                    if((p/i)>l)
                        v.push_back(p/i);
                }
                else
                {
                    if(i>l)
                        v.push_back(i);
                }
            }
        }
        printf("Case %lld:",cs++);
        sort(v.begin(),v.end());
        if(v.size() == 0) printf(" impossible");
        else
        {
            for(ll i = 0; i < v.size(); i++)
            {
                printf(" %lld", v[i]);
            }
        }
        v.clear();
        printf("\n");
    }

}


