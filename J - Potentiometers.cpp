#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
int arr[mx];
int tree[mx*4];

void init(int node, int beg, int endd)
{
    if(beg == endd)
    {
        tree[node] = arr[beg];
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd)/2;

    init(left, beg, mid);
    init(right, mid + 1, endd);

    tree[node] = tree[left] + tree[right];
}

int query(int node, int beg,int endd, int i, int j)
{
    if(i > endd || j < beg) return 0;
    if(beg >= i && endd <= j) return tree[node];
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd) / 2;

    int l = query(left, beg, mid, i, j);
    int r = query(right, mid + 1, endd, i, j);

    return l + r;
}
void update(int node, int beg, int endd, int i, int newvalue)
{
    if(i > endd || i < beg) return;
    if(beg >= i && endd <= i)
    {
        tree[node] = newvalue;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd)/2;

    update(left, beg, mid, i, newvalue);
    update(right, mid + 1, endd, i,newvalue);

    tree[node] = tree[left] + tree[right];
}
int main()
{
    int cs = 1, n, q, t,x,y;
    while(1)
    {

        scanf("%d", &n);
        if(n == 0)break;
        for(int i = 1; i <= n; i++)scanf("%d", &arr[i]);
        if(cs > 1)cout << endl;
        printf("Case %d:\n", cs++);
        init(1, 1, n);
        string in;
        while(cin >> in)
        {
            if(in == "END")break;
            if(in == "S")
            {
                int m;
                scanf("%d%d",&x,&y);
                update(1,1,n,x,y);
            }
            else
            {
                int x,y;
                scanf("%d%d",&x,&y);
                printf("%d\n",query(1,1,n,x,y));
            }
        }
    }
    return 0;
}

