#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    cin >> test;
    while(test--)
    {
        int timee;
        int n;
        cin >> timee >> n;
        string str1,str ;
        int com[50],hor[50],ac[50],am[50], val,i,j,k,l;
        i=j=k=l=0;
       getchar();
       for(int loop = 1; loop <= n; loop++)
        {

            cin >> str1 >> str;
            cin >> val;
            int len = str.size() - 1;
            if(str[len] == 'y')com[i++] = val;
            else if(str[len] == 'r')hor[j++]=val;
            else if(str[len] == 'n')
            {
                if(str[len - 4] == 'c')ac[k++]=val;
                else am[l++]=val;
            }

        }
        int mx = -1;
        for(int m = 0; m < i ; m++)
        {
            for(int n = 0; n < j ; n++)
            {
                for(int o = 0; o < k ; o++)
                {
                    for(int p = 0; p < l ; p++)
                    {
                     if(com[m] + hor[n] + ac[o] + am[p] <= timee && com[m] + hor[n] + ac[o] + am[p] > mx)mx = com[m] + hor[n] + ac[o] + am[p];
                    }
                }
            }


        }
        if(mx == -1){printf("Case %d: Movie show canceled!\n",cs++);}
        else {printf("Case %d: %d\n",cs++,mx);}
    }
}

