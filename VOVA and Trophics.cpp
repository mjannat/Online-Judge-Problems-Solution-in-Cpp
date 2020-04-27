#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int mx = 0;
    vector<int>l(n);
    vector<int>r(n);
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'G')mx++;
        if(str[i] == 'G')
        {
            l[i] = 1;
            if(i > 0)l[i] += l[i-1];
        }
    }
   for(int i = n-1; i >= 0; i--)
    {
        if(str[i] == 'G')
        {
            r[i] = 1;
            if(i < n-1)r[i] += r[i+1];
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'G')continue;
        int newr = 1;
        if(i > 0)newr += l[i-1];
        if(i < n-1)newr += r[i+1];
        res = max(newr , res);
    }
    res = min(res , mx);
    if(mx == n)res = n;
    cout << res << endl;
    return 0;
}

