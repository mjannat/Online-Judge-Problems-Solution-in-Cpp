#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin >> test;
    while(test--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        if(b >= a && n > a)cout << -1 << endl;
        else
        {
            int sum = 0,day = 0;
            while(1)
            {
                sum += a;
                day++;
                if(sum >= n)
                {
                    break;
                }
                sum -= b;
            }
            cout << day << endl;
        }
    }
}
