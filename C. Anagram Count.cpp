#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cs = 1;
    scanf("%d",&test);
    while(test--)
    {
        string str;
        cin >> str;
        sort(str.begin(),str.end());
        long long cnt = 0;
        do
        {
            cnt++;
        }
        while(next_permutation(str.begin(),str.end()));
        printf("Case %d: %lld\n",cs++,cnt);
    }
}
