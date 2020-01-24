#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test;
    cin >> test;
    for(ll i = 1; i <= test; i++)
    {
        long long a, b, n, res = 0, k;
        cin >> a >> b;
        n = 0;
        while(1)
        {
             n = n * 10 + b;
            res++;
            k = n % a;
            if (k == 0) break;
            else n = k;
        }
        cout << "Case "<< i << ": " << res << endl;

    }
}
