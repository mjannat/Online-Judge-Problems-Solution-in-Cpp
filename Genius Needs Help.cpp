#include<bits/stdc++.h>
using namespace std;
int main()
{
        string str1,str2,res = "";
        cin >> str1 >> str2;
        int tmp = 0,len1,len2;
        len1 = str1.size(), len2 = str2.size();
        for(int i = len1 - 1, j = len2 - 1; i >= 0 && j >= 0; i--,j--)
        {
            int val = (str1[i] - '0') + (str2[j] - '0') + tmp;
            if(val < 10)
            {
                res += (val + '0');
                tmp = 0;
            }
            else
            {
                res += ((val % 10) + '0');
                tmp = 1;
            }
        }
        if(len1 > len2)
        {
            int a = len1 - len2 - 1;
            for(int i = a; i >= 0; i--)
            {
                int val = tmp + (str1[i] - '0');
                if(val < 10)
                {
                    res += (val + '0');
                    tmp = 0;
                }
                else
                {
                    res += (val % 10) + '0';
                    tmp = 1;
                }
            }

        }
        else if(len1 < len2)
        {
            int a = len2 - len1 - 1;
            for(int i = a; i >= 0; i--)
            {
                int val = tmp + (str2[i] - '0');
                if(val < 10)
                {
                    res += (val + '0');
                    tmp = 0;
                }
                else
                {
                    res += (val % 10) + '0';
                    tmp = 1;
                }
            }
        }
        else if(tmp > 0)
        {
            res += (tmp + '0');
        }
        reverse(res.begin(),res.end());
        string finall = "";
        int flag = 0;
        for(int i = 0; i < res.size(); i++)
        {
            if(flag == 1)finall += res[i];
            else if(res[i] > '0' && flag == 0)
            {
                flag = 1;
                finall += res[i];
            }

        }
        if(finall == "")finall = "0";
        cout << finall << endl;

}
