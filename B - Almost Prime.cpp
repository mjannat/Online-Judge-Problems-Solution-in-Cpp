#include<bits/stdc++.h>
using namespace std;
vector< int >primes;
void prime()
{
    primes.push_back(2);
    for(int i = 3; i <= 3300; i++)
    {
        bool p = true;
        for(int j = 0; j < primes.size() && primes[j] * primes[j] <= i; j++)
        {
            if(i % primes[j] == 0)
            {
                p = false;
            }
        }
        if(p)
        {
            primes.push_back(i);
        }
    }
}
int main()
{
 prime();
 int n;
 cin >> n;
 int tmp = 0,cnt = 0;
 for(int i = 3; i <= n;i++)
 {
    for(int j = 0; primes[j] <= i;j++)
    {
        if(i % primes[j] == 0)tmp++;
    }
    if(tmp == 2)
    {
        cnt++;
        tmp = 0;
    }
    else tmp = 0;
 }
 cout << cnt << endl;
}
