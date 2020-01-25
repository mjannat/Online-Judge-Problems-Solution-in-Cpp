#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        bool flag = false;
        int m = n;
        while(1)
        {
            int temp = m;
            flag = false;
            while(temp)
            {
                if(temp % 3 == 2)
                {
                    flag = true;
                    break;
                }
                else temp /= 3;
            }
            if(flag == false)
            {
                cout << m << endl;
                break;
            }
            else m++;
        }
    }
}
