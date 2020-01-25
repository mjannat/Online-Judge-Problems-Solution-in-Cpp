#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string str;
        int len, query;
        cin >> len >> query;
        cin >> str;
        char b;
        int a;
        int cnt = 0;
        for(int i = 0; i < len/2; i++)
        {
            if(str[i] != str[len - i - 1])cnt++;
        }
        int pal = 0;
        for(int i = 1; i <= query; i++)
        {
            cin >> a >> b;
            a--;
            if(str[a] != b)
            {
                if(str[a] == str[len - a - 1])cnt++;
                str[a] = b;
                if(str[a] == str[len - a - 1])cnt--;

            }
            if(cnt == 0)pal++;
        }
        cout << pal << endl;
    }
    return 0;
}
