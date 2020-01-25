#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[3], c = 0, tmp;
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if(n % a[0] == 0) cout << (n/a[0]) << endl;
    else if(a[0] + a[1] + a[2] == n) cout << 3 << endl;
    else
    {
        c = n/a[0];
        tmp = n - (c * a[0]);
        while(1)
        {
            --c;
            tmp += a[0];

            if(tmp % a[1] == 0)
            {
                c += (tmp / a[1]);
                return cout << c << endl, 0;
            }
            if(tmp % a[2] == 0)
            {
                c += (tmp / a[2]);
                return cout << c << endl, 0;
            }
        }
    }
}
