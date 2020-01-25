#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int result[1000] = {0};
void fact_dp()
{
    result[0] = 1;
    for (int i = 1; i <= 11; ++i)
    {
        result[i] = i * result[i - 1];
    }
}
int main()
{
    int test;
    cin >> test;
    fact_dp();
    while(test--)
    {
        string str;
        ll r,cnt = 0;
        cin >> str >> r;
        ll temp = str.size();
        for(int i = 0 ; i < str.size(); i++)if(str[i] == '0')cnt++;
        ll  val = result[temp]/(result[temp-r]);
        if(cnt != 0)
        {
            temp--;
            r--;
            cout << val - result[temp]/(result[temp-r]) << endl;
        }
        else cout << val << endl;
    }
}
