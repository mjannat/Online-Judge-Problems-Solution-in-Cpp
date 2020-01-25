#include<bits/stdc++.h>
using namespace std;
#define PI 3.141593
double fibb[36];
void fib()
{
    fibb[0]=0.0;
    fibb[1]=1.0;
    for(int i=2; i<=36; i++)
    {
        fibb[i]=fibb[i-1]+fibb[i-2];
    }
}
int main()
{
    int t,i,n;
    fib();
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        double res = 0.0;
        for(int j=1; j<=n; j++)
        {
            double area = fibb[j] * fibb[j];
            double cir_area = (PI * area)/4.0;
            res += (area - cir_area);
        }
        cout << fixed << setprecision(2) << res << endl;
    }

    return 0;
}
