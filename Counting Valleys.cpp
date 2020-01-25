#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int alt = 0,res = 0;
    for(int  i = 0; i < str.size(); i++)
    {

        if(str[i] == 'D')alt--;
        else if(str[i] == 'U')
        {
            alt++;
            if(alt == 0)res++;
        }
    }
    cout << res << endl;
}
