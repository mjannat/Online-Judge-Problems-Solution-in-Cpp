#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>arr, int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if(arr[m-1] >= arr[m])r = m - 1;
        else if (arr[m] < x)
            l = m + 1;
        else if (arr[m] >= x)
            return m;


    }
return -1;
}
int main()
{
    int test, cs = 1;
    scanf("%d",&test);
    while(test--)
    {
        int n,query,x;
        scanf("%d %d",&n,&query);
        while(query--)
        {
            char c;
            scanf("%c",&c);
            vector< int >rope;
            vector< int > :: iterator it;
            rope.push_back(0);
            rope.push_back(n);
            if(c == 'F')
            {
                scanf("%d",&x);
                printf("%d\n",rope[x] - rope[x - 1]);
            }
            else
            {
                scanf("%d",&x);
                int pos = binarySearch(rope,0,rope.size()-1,x);
                int temp = rope[pos] - rope[pos - 1];
                rope[pos] = ((temp - x)  + 2)  + rope[pos-1];
                rope.push_back((temp - rope[pos]) + rope[pos]);
                sort(rope.begin(),rope.end());
            }
        }
    }
}
