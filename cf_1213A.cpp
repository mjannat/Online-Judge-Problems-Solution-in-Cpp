#include <bits/stdc++.h.>
using namespace std;

int main()
{
    int n, x, o = 0, e = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x & 1)
        {
            o++;
        }
        else
        {
            e++;
        }
    }
    cout << min(o, e) << endl;
}
