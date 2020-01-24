#include<bits/stdc++.h>
using namespace std;
#define Max 100005
int arr[Max];
struct data
{
    int sum, lazy;
    bool lazyflag;
} tree[Max*4];
void init(int node, int beg, int endd)
{
    if(beg == endd)
    {
        tree[node].sum = arr[beg];
        tree[node].lazy = 0, tree[node].lazyflag = 0;
        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (beg+endd)/2;

    init(left, beg, mid);
    init(right, mid+1, endd);

    tree[node].sum = tree[left].sum + tree[right].sum;
}
void pushDown(int node, int left,int right, int  beg,int mid,int endd)
{
    tree[left].sum += tree[node].lazy * (mid - beg +1);
    tree[right].sum += tree[node].lazy *(endd - mid);

    tree[left].lazy += tree[node].lazy;
    tree[left].lazyflag = true;

    tree[right].lazy += tree[node].lazy;
    tree[right].lazyflag = true;

    tree[node].lazy = 0;
    tree[node].lazyflag = false;
}
void update (int node, int beg, int endd, int x, int y, int val)
{
    if(x > y)return;
    if(beg == x && endd == y)
    {
        tree[node].sum += val * (endd - beg +1);
        tree[node].lazy += val;
        tree[node].lazyflag = true;
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (beg + endd) / 2;

    if(tree[node].lazyflag)pushDown(node, left, right, beg, mid, endd);
    update(left, beg, mid, x, y,val);
    update(right, mid+1, endd, x, y,val);
    tree[node].sum = tree[left].sum + tree[right].sum;
}
int query(int node,int beg,int endd,int x,int y)
{
    if(x > y)return 0;
    if(beg == x && endd == y)return tree[node].sum;

    int left = node * 2;
    int right = left + 1;
    int mid = (beg + endd) / 2;
    if(tree[node].lazyflag)pushDown(node, left, right, beg, mid, endd);
    int l = query(left, beg, mid,x,y);
    int r = query(right,mid+1, endd,x,y);
    return l + r;
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i = 1; i <= test; i++)
    {
        int n,q,x,y,val,st;
        scanf("%d%d",&n,&q);
        //memset(arr,0,n);
        init(1,1,n);
        while(q--)
        {
            scanf("%d",&st);

            if(st == 0)
            {

                scanf("%d%d%d",&x,&y,&val);
                update(1,1,n,x,y,val);
            }
            else
            {
                scanf ("%d%d",&x,&y);
                printf("%d\n",query(1,1,n,x,y));
            }
        }
    }
}
