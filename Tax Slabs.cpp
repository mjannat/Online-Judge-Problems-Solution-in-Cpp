#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll income;
        cin >> income;
        ll result = 0;
        int arr[10];
        arr[0] = 0;
        arr[1] = 12500;
        arr[2] = 25000;
        arr[3] = 37500;
        arr[4] = 50000;
        arr[5] = 62500;
        if(income > 1500000)
        {
            result += (income - 1500000) * .30;
            result += (arr[1]+arr[2]+arr[3]+arr[4]+arr[5]);
        }
        else if(income > 1250000)
        {
            result += (income - 1250000) * .25;
            result += (arr[1]+arr[2]+arr[3]+arr[4]);
        }
        else if(income > 1000000)
        {
            result += (income - 1000000) * .20;
            result += (arr[1]+arr[2]+arr[3]);
        }
        else if(income >= 750000)
        {
            result += (income - 750000) * .15;
            result += (arr[1]+arr[2]);
        }
        else if(income > 500000)
        {
            result += (income - 500000) * .10;
            result += (arr[1]);
        }
        else if(income > 250000)
        {
            result += (income - 250000) * .05;
        }
        else
        {
            result = income;
        }
        if(result == income)cout << income << endl;
        else cout << income - result << endl;
    }
}
