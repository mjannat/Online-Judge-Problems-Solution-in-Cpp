#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c1 = 0,c2 = 0;
    cin >> t;
    while(t--)
    {
        int n;
        c1 = 0, c2 = 0;
        cin >> n;
        string str;
        cin >> str;
       for(int i = 0;i < str.size();i++)
       {
           if(str[i] == '>')
            break;
           else c1++;
       }
       for(int i = str.size()-1;i >= 0;i--)
       {
           if(str[i] == '<')
            break;
           else c2++;
       }
       cout << min(c1,c2) << endl;
    }
}
