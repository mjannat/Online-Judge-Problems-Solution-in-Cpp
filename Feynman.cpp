#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    {
        int n,sum = 0;
        cin >> n ;
        if(n == 0)break;
        for(int i = n; i >= 1; i--)
        {
            sum+= (i * i);
        }
        cout << sum << endl;
    }
    return 0;
}

