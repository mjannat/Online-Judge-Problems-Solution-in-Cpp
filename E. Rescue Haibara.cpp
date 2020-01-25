#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  test, cs = 1;
    cin >> test;
    while(test--)
    {
        int n, x, y,a,b;
        pair < pair <int,int > , int >vct[500];
        cin >> n >> x >> y;
        int j = 0,k = 0,cnt = 0;
        while(j < n)
        {
            cin >> a >> b;
            if(a <= x && b >= y  )
            {
                b = b * (-1);
                vct[k] = make_pair(make_pair(a,b),j+1);
                cnt++;
                k++;

            }
            j++;
        }
        if(cnt == 0)cout << -1 << endl;
        else {

        sort(vct, vct + cnt);
         cout << vct[0].second << endl;
        }

    }
    return 0;
}
