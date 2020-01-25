#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string str;
        set<string>st;
        int flag = 0;
        for(int i = 0; i < 4; i++)
        {
            cin >> str;
            if(i < 2)
            {
                st.insert(str);
            }
            else
            {
                if(st.count(str) == 1)flag = 1;
            }
        }
        if(flag == 0)
        {
            cout << "Oh no!, such a shame\n";
        }
        else
        {
            cout << "Possible\n";
        }
    }
}
