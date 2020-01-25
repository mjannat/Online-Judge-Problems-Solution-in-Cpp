#include<bits/stdc++.h>
using namespace std;
int hexToDec(char a, char b)
{
    int valA = 0,valB = 0;
    if(a >= 48 && a <= 57)
    {
        valA = a - '0';
    }
    else if(a >= 65)
    {
        if(a == 'A')valA = 10;
        else if(a == 'B')valA = 11;
        else if(a == 'C')valA = 12;
        else if(a == 'D')valA = 13;
        else if(a == 'E')valA = 14;
        else if(a == 'F')valA = 15;
    }
    if(b >= 48 && b <= 57)
    {
        valB = b - '0';
    }
    else if(b >= 65)
    {
        if(b == 'A')valB = 10;
        else if(b == 'B')valB = 11;
        else if(b == 'C')valB = 12;
        else if(b == 'D')valB = 13;
        else if(b == 'E')valB = 14;
        else if(b == 'F')valB = 15;
    }


    int ret = ((valA * 16) +valB);
    return ret;
}
int main()
{
    int test, cs = 1;
    scanf("%d",&test);
    int arr[200][200];

    arr[65][0] = 127, arr[65][1] = 0,   arr[65][2] = 0;
    arr[66][0] = 127, arr[66][1] = 127, arr[66][2] = 0;
    arr[67][0] = 127, arr[67][1] = 127, arr[67][2] = 127;
    arr[68][0] = 255, arr[68][1] = 0,   arr[68][2] = 0;
    arr[69][0] = 255, arr[69][1] = 127, arr[69][2] = 0;
    arr[70][0] = 255, arr[70][1] = 127, arr[70][2] = 127;
    arr[71][0] = 255, arr[71][1] = 255, arr[71][2] = 0;
    arr[72][0] = 255, arr[72][1] = 255, arr[72][2] = 127;
    arr[73][0] = 255, arr[73][1] = 255, arr[73][2] = 255;

    while(test--)
    {
        string str;
        map<char, int>mp;
        map<char, int> :: iterator it;
        cin >> str;

        int tmpVal1 = hexToDec(str[0],str[1]);
        int tmpVal2 = hexToDec(str[2],str[3]);
        int tmpVal3 = hexToDec(str[4],str[5]);
        printf("Case %d: ",cs++);
        int flag = 0;
        for(int j = 65; j <= 73; j++)
        {
            if(tmpVal1 <= arr[j][0] && tmpVal2 <= arr[j][1] && tmpVal3 <= arr[j][2])
            {
                if(flag == 0)
                {
                    printf("%c",j);
                    flag = 1;
                }
                else printf(" %c",j);

            }
        }
        printf("\n");
    }

}
