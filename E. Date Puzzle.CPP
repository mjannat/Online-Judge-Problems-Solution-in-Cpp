#include<bits/stdc++.h>
using namespace std;
int arr[30];
int main()
{
    int test, cs = 1;
    scanf("%d",&test);
    arr[0] = 0, arr[1] = 31,arr[2] = 28,arr[3] = 31,arr[4] = 30,arr[5] = 31,arr[6] = 30,arr[7] = 31,arr[8] = 31,arr[9] = 30,arr[10]= 31, arr[11] = 30,arr[12] = 31;
    while(test--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("Case %d: ",cs++);

        if((a <= 12 && b <= 12 && c <= 12 && d <= 12)&&((a > c && b < d) || (b > d && a < c) ))
        {
            printf("Okay got it!\n");
        }
        else if((a <= 12 && b <= 12 && c <= 12 && d <= 12) &&((a < c && b < d) || (a == c && b < d) || (b == d && a < c)))
        {
            printf("Oh no it is ambiguous!\n");
        }
        else if(a > 12 || b > 12 || c > 12 || d > 12)
        {

            if((a > 12 || c > 12) && (a <= arr[b] && c <= arr[d]) && ((b < d) || (b == d && a < c)))
            {
                printf("Okay got it!\n");
            }
            else if((b > 12 || d > 12) && (b <= arr[a] && d <= arr[c])&& ((a < c)|| ( a == c && b < d)))
            {

                printf("Okay got it!\n");
            }
            else
            {
                printf("I am sure there is some kinda mistake!\n");
            }
        }
        else
        {
            printf("I am sure there is some kinda mistake!\n");
        }
    }
}
