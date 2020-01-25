#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103 };
void primeFactors(int  n, int a)
{
   int divide,sum = 0;
   while(n > 1)
   {
      divide = n / a;
      sum += divide;
      n = divide;
   }
   printf("%d (%d)",a,sum);
}
int main()
{
    int test,cs = 1;
     scanf("%d",&test);
    while(test--)
    {
        int n,fact;
        scanf("%d",&n);
        printf("Case %d: %d = ",cs++,n);
        for(int i = 0;arr[i] <= n;i++){
       fact = arr[i];
       if(i != 0)printf(" * ");
       primeFactors(n,fact);
        }
        printf("\n");
    }
}
