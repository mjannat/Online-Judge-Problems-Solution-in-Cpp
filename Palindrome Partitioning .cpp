#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string str;
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] != 'W' && str[i] != 'N' && str[i] != 'D')cnt++;

        }
        if(cnt % 6 == 0)
        {
            if(cnt / 6 == 1)cout << cnt / 6 << " OVER\n";
            else cout << cnt / 6 << " OVERS\n";
        }
        else if(cnt / 6 == 0)
        {
            if(cnt == 1) cout <<  cnt << " BALL\n";
            else  cout <<  cnt << " BALLS\n";
        }
        else
        {
            if(cnt / 6 == 1 && cnt % 6 == 1)cout << cnt / 6 << " OVER " << cnt % 6 << " BALL\n";
            else if(cnt / 6 > 1 && cnt % 6 == 1)cout << cnt / 6 << " OVERS " << cnt % 6 << " BALL\n";
            else if(cnt / 6 == 1 && cnt % 6 > 1)cout << cnt / 6 << " OVER " << cnt % 6 << " BALLS\n";
            else if(cnt / 6 > 1 && cnt % 6 > 1)cout << cnt / 6 << " OVERS " << cnt % 6 << " BALLS\n";
        }
    }
}
