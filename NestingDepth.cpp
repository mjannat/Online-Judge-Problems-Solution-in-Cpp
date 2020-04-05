#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    cin >> test;
    while(test--)
    {
        string str;
        cin >> str;
        string temp = "";
        int flag = -1;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '1' && flag == -1)
            {
                temp += "(1";
                flag = 1;
            }
            else if(str[i] == '0' && flag == -1)
            {
                temp += "0";
                flag = 0;
            }
            else if(str[i] == '0' && flag == 1)
            {
                temp += ")0";
                flag = 0;
            }
            else if(str[i] == '1' && flag == 0)
            {
                temp += "(1";
                flag = 1;
            }
            else
            {
                temp += str[i];
            }
        }
        if(str[str.size() - 1] == '1')temp += ")";
        cout << "Case #" << cs++ <<": " << temp << endl;
    }
}
