#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cs = 1;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        string str;
        getline(cin, str);
        char c = str[0];
        if(isupper(c)) tolower(c);
        for(int i = 1; i < str.size(); )
        {
            while(1)
            {
                if(str[i] != ' ' && isupper(str[i]))printf("%c",tolower(str[i]));
                if(str[1] >= 'a' && str[1] <= 'z')printf("%c",str[1] - 32);
                if(str[i] == ' ' || i == str.size() - 1)break;
                i++;
            }
            printf("%c",c);
            c = str[i+1];
            i+=2;
            printf("ay ");
        }
        printf("\n");
    }
}
