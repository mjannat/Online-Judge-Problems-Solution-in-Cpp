#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < str.size();i++)
    {
        if(str[i] == 'a')cnt++;
    }
    int len = str.size();
    if((len % 2 == 0 && cnt > len / 2) || (len % 2 == 1 && cnt > (len / 2 + 1)))
    {
     printf("%d\n",len);
    }
    else
    {
        int tmp = len - cnt;
        tmp = (tmp - cnt) + 1;
        len = len - tmp;
        printf("%d\n",len);
    }
}

