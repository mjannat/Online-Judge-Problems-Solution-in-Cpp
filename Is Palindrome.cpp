#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,temp = "";
    cin >> str;
    temp = str;
    reverse(str.begin(),str.end());
    if(temp == str)cout <<  "Yes\n";
    else    cout <<  "No\n";
    return 0;
}
