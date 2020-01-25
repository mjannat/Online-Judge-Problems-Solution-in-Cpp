
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i;
    cin >> test;
    for(int k = 1; k <= test; k++)
    {
        int n,val,mx = 0,height,index;
        stack<int>length;
        stack<int>idx;
        scanf("%d",&n);
        for(i = 1; i <= n; i++)
        {
            scanf("%d",&val);
            if(length.empty() || val >= length.top())
            {
                length.push(val);
                idx.push(i);

            }
            else
            {
                while(!length.empty() && length.top() > val)
                {
                    height =  length.top();
                    index = idx.top();
                    mx= max(mx, height * (i - index));
                    length.pop();
                    idx.pop();
                }

                length.push(val);
                idx.push(index);
            }

        }
        while(!length.empty())
        {
            height =  length.top();
            index = idx.top();
            mx= max(mx,height * (i - index));
            length.pop();
            idx.pop();
        }

        printf("Case %d: %d\n", k, mx);
    }
}

