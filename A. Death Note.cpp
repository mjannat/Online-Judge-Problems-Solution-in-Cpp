#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int prepage = 0;
    while(n--)
    {
        int name;
        cin >> name;
        int page = 0;
        name += prepage;
        page = name / m;
        prepage = name % m;
        cout << page << " ";
    }
}
