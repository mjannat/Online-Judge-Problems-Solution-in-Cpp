#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cap = 0, sm = 0;
    for(int i = 0; i < str.size();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')cap++;
        else if(str[i] >= 'a' && str[i] <= 'z')sm++;
    }
    cout << cap << " " << sm << endl;
    return 0;
}
