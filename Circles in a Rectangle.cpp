#include<bits/stdc++.h>
using namespace std;
#define PI 3.1416
int main()
{
    int test, cs = 1;
    cin >>  test;
    while(test--)
    {
        double r;
        cin >> r;
        double hight = 2.0 * r;
        double width = 4.0 * r;
        double area = hight * width;
        double area_cir = (PI * r * r);
        printf("Case %d: %.2lf\n",cs++,area - (2.0 * area_cir));

    }
}

