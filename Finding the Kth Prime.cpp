#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
bool prime[MAX + 1];
vector < int > vct;
void Sieve()
{
    memset(prime, false, sizeof(prime));
    int root = sqrt(MAX);
    for (int p=3; p <= root; p += 2)
    {
        if (prime[p] == false)
        {
            for (int i=p*p; i<= MAX; i += p)
                prime[i] = true;
        }
    }
    vct.push_back(2);
    for (int p = 3; p <= MAX; p+=2)
    {
        if (prime[p] == false) vct.push_back(p);

    }
}
int main()
{
    Sieve();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << vct[n-1] << endl;
    }
}
