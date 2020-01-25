#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int bed = 0, kit =0,liv = 0;
        for(int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            if(str[0] == 'b' || str[0] == 'B')bed++;
            else if(str[0] == 'k' || str[0] == 'K')kit++;
            else if(str[0] == 'l' || str[0] == 'L')liv++;

        }
        bed/=2;
        int mn = -1;
        mn = min(min(kit,liv),bed);
        printf("%d\n",mn);
    }
}

