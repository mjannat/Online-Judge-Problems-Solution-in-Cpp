#include<bits/stdc++.h>
using namespace std;
bool prime[10008];
void Sieve()
{
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    for (int p=2; p*p<=10008; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=10008; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
    int n;
    int a, b;
    Sieve();
    int test;
    cin >> test;
    while(test--){
    int flag = 1,k = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= i; j++)
        {
            if( i % j == 0)
            cnt++;
        }
       if(prime[cnt]){
            k++;
       if(k == 1)cout << i;
       else cout << " " << i;
        flag = 0;}

    }
    if(flag == 1)cout << -1 << endl;
    else cout << endl;
    }
}
