#include <bits/stdc++.h>
using namespace std;
void Divisors(int n)
{
    int cnt = 0;
    for (int i=1;i <= n;i++)
        if (n%i==0)
           printf("%d\n",i);

}
int main()
{
    int n;
    cin >> n;
    Divisors(n);
    return 0;
}
