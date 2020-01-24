#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cs = 1;
    scanf("%d",&test);
    while(test--)
    {
        int n,base;
        string str = "";
        scanf("%d %d",&base,&n);
        if(n == 0) str = '0';
        else  if(base < 10)
        {
            while(n > 0)
            {
                str += (n % base) + '0';
                n /= base;
            }
        }
        else if(base > 9)
        {
            while(n > 0)
            {
                int val = n % base;
                if(val < 10)str += (n % base) + '0';
                else
                {
                    if(val == 10)str +='A';
                    else if(val == 11)str += 'B';
                    else if(val == 12)str += 'C';
                    else if(val == 13)str += 'D';
                    else if(val == 14)str += 'E';
                    else if(val == 15)str += 'F';
                }
                n /= base;
            }
        }
        reverse(str.begin(),str.end());
        printf("Case %d: ",cs++);
        cout << str;
        printf("\n");
    }

}
