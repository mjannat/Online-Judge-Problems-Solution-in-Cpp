#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t, cs = 1;
    cin >> t;
    while(t--)
    {
        double r, diag, areasqr, areacir, req;
        cin >> r;
        areasqr = r * r;
        diag = r * sqrt(2.0);
        diag /= 2.0;
        areacir = diag * diag * pi;
        req = areacir - areasqr;
        req /= 4.0;
        double half = r/2.0;
        double hc = (half * half * pi) / 2.0;
        double res = hc - req;
        cout << "Case " << cs++ << ": " << fixed << setprecision(4) << res << endl;
    }
}
