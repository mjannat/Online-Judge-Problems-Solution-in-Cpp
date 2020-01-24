#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    double a,r1,r2,r3,r4;
    while(cin >> a >> r1 >> r2 >> r3 >> r4)
    {
        double area1 = (PI * r1 * r1) / 4.0;
        double area2 = (PI * r2 * r2) / 4.0;
        double area3 = (PI * r3 * r3) / 4.0;
        double area4 = (PI * r4 * r4) / 4.0;
        printf("%.3lf\n",(a * a) - (area1 + area2 + area3 + area4));

    }
}
