#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, val_a = 0, val_b = 0,cnt = 0, res = 0;
    scanf("%d",&n);
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a')val_a++;
        else if(str[i] == 'b')val_b++;
        cnt++;
        if(cnt % 2 == 0)
        {
            if(val_a != val_b)
            {
                res++;
                if(val_a > val_b)
                {
                    str[i] = 'b';
                    val_b++;
                    val_a--;
                }
                else
                {
                    str[i] = 'a';
                    val_a++;
                    val_b--;
                }

            }
        }
    }
    printf("%d\n",res);
    cout << str << endl;
    return 0;
}
