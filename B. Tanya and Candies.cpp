#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
int main()
{
    long long n,cnt = 0;
    cin >> n;
    long long in[n+1];
    for(int i = 0; i < n; i++ ) cin >> in[i];
    for(int i = 0; i < n; i++)
    {
        long long sum1 = 0,sum2 = 0,l = 0;
        for(int b = 0; b < n; b++)arr[b] = 0;
        for(int a = 0; a < n; a++)
        {
            if(a != i)
            {
                arr[l] = in [a];
                l++;
            }
        }
        for(int j = 0; j < n-1 ; j+=2)
        {
            sum1 += arr[j];
        }

        for(int k = 1; k < n-1 ; k+=2)
        {
            sum2 += arr[k];
        }
        if(sum1 == sum2)cnt++;
    }
    cout << cnt << endl;
    return 0;

}


