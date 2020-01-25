#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test,cs =1;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;
        ll res1 = (n*n*n*n)+(11 * n * n);
        ll res2 = (6*n*n*n)+(6*n);
        ll final_res = (abs(res1-res2)) / 24;
        cout << "Case " << cs++  <<": " << final_res << endl;
    }
}
