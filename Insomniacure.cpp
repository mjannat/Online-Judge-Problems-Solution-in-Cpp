#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d, k, l, m, n;
    cin >> k >> l >> m >> n >> d;
    int cnt = 0;
    if(k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
        return 0;
    }
    for(int i = 2; i <= d; i++)
    {
        if(i % k == 0 || i  % l == 0 || i % m == 0 || i % n== 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
