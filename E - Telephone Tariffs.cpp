#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n1,c1,n2,c2,t,n3;
    cin >> n1 >> c1;
    cin >> n2 >> t >> c2;
    cin >> n3;
    int timee;
    cin >> timee;
    int mn,sec;
    ll val = 0;
    char c;
    while(timee--)
    {
        cin >> mn >> c >> sec;
        if(mn == 00 && sec <= 06)
        {
            val += 0;
        }
        else if(sec > 00)
        {
            val += mn + 1;
        }
        else
        {
            val += mn;
        }
    }
    ll basicc = 0, com = 0, unlimited = 0;
    basicc = n1 + (c1 * val);
    if(val > t)
    {
        com = n2 + ((val - t) * c2);
    }
    else
    {
        com = n2;
    }
    unlimited = n3;
    cout << "Basic:     " << basicc << endl;
    cout << "Combined:  " << com << endl;
    cout << "Unlimited: " << unlimited << endl;
}
