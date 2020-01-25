#include<bits/stdc++.h>
using namespace std;
const int maxx=100005;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char str[maxx];
        scanf("%s",str);
        char temp='z';
        int pos1,pos2;
        int len = strlen(str);
        char s1 = 'z' + 1,s2;
        for(int i = 1; i < len; i++)
        {
            if(str[i] < str[i-1] )
            {
                pos1 = i - 1;
                s1 = str[i - 1];
                break;
            }
        }
        s2 = 'z' + 1;
        for(int i = 0; i < len; i++)s2 = min(s2,str[i]);

        if(s1 > s2)
        {
            for(int k = 0; k < len; k++)
            {
                if(str[k] == s1)str[k] = s2;
                else if(str[k] == s2)str[k] = s1;
            }
        }
          printf("%s\n",str);
    }
    return 0;
}

