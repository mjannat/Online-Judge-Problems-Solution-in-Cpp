#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    char c = str[0];
    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] > c)cnt++;
        c = str[i];
    }
    cout << cnt << endl;
}
