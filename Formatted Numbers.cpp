#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, res = "";
    int j = 0;
    cin >> str;
    for(int i = str.size()-1; i >= 0; i--)
    {
        if(j == 3)
        {
            res+=',';
            j = 0;
        }
        j++;
        res+=str[i];
    }
    reverse(res.begin(),res.end());
    cout << res << endl;

}
