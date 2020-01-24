#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int b, p, f;
        int h, c;
        cin >> b >> p >> f;
        cin >> h >> c;
        if(c > h)
        {
            swap(h,c);
            swap(p,f);
        }
        int sum = 0;
        if(p * 2 <= b)
        {
            sum += p * h;
            b -= p * 2;
        }
        else if(p * 2 > b)
        {
            sum += (b / 2) * h;
            b = b % 2;
        }
        if( f * 2 <= b)
        {
            sum += c * f;
        }
        else
        {
            sum += (b / 2) * c;
        }
        cout << sum << endl;
    }
}
