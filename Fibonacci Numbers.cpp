#include<bits/stdc++.h>
using namespace std;
int fibo[50];
void fibon()
{
    fibo[1] = 1;
    fibo[2] = 1;
    fibo[3] = 2;
    int j = 2;
    for(int i = 4; i < 50; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main()
{
    int n;
    fibon();
    cin >> n;
    cout << fibo[n] << endl;
}
