#include<bits/stdc++.h>

using namespace std;

int main()
{
    int L,i;
    scanf("%d",&L);

    for(i=1; i<=L; i++){
        if((L%i) == 0)printf("%d\n",i);
        }

    return 0;
}
