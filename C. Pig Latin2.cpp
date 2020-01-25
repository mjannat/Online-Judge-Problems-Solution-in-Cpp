#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
    string str;
    getline(cin,str);
    string tmp = "", val = "",res= "";
    tmp = str[0] + 32;
    for(int i = 1; i < str.size();)
    {

        if(str[i] == ' ')
        {
           res +=  val + tmp + "ay" + " ";
            tmp = str[i+1];
            i+=2;
            val ="";
        }
        else
        {
            val += str[i];
            i++;
        }
    }
    res += val + tmp + "ay";
    res[0] = res[0] - 32;
    cout << res << endl;
    }
}

