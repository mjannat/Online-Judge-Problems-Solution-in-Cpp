#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        string str;
        cin >> str;
        int a = 0, b = 0;
        int f1 = 0, f2 = 0;
        for(int i = 0; i < str.size()-1; i+=2)
        {
            if(str[i] == '1')
            {
                a++;
            }
            f1++;
            if(a > (b + (n - f2)))
            {
                cout << i + 1 << endl;
                break;
            }
            if(b > (a + (n - f1)))
            {
                cout << i + 1 << endl;
                break;
            }
            if(str[i+1] =='1')
            {
                b++;
            }
            f2++;
            if(a > (b + (n - f2)))
            {
                cout << i + 2 << endl;
                break;
            }
            if(b > (a + (n - f1)))
            {
                cout << i + 2 << endl;
                break;
            }
        }
        if(a == b)
        {
            cout << n * 2 << endl;
        }
    }
}
