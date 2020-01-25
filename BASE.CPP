#include<bits/stdc++.h>
using namespace std;
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

// Function to convert a number from given base 'b'
// to decimal
int toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    int i;

    // Decimal equivalent is str[len-1]*1 +
    // str[len-1]*base + str[len-1]*(base^2) + ...
    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
           printf("Invalid Number");
           return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}
int main()
{
    int test,cs = 1;
    scanf("%d",&test);
    while(test--)
    {
        int base;
        char str[65540];
        scanf("%d",&base);
        cin >> str;
        toDeci(str,base);
        printf("Case %d: ",cs++);
        cout << str << endl;
    }

}
