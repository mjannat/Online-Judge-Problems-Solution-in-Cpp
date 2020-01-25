#include<bits/stdc++.h>
using namespace std;
#define mx 100010
int arr[mx+4];
int num[10];

struct data
{
    int mx1;
    int mx2;
};
data tree[mx*4];
data ss,tt;
data maxx(data a, data b)
{
    num[0] = a.mx1;
    num[1] = a.mx2;
    num[2] = b.mx1;
    num[3] = b.mx2;

    sort(num,num+4);
    data t;
    t.mx1 = num[3];
    t.mx2 = num[2];
    return t;
}

void build(int node,int beg ,int endd)
{
    if(beg == endd)
    {
        tree[node].mx1 = arr[beg];
        tree[node].mx2 = -1;
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (beg + endd) / 2;

    build(left, beg, mid);
    build(right, mid + 1, endd);

    tree[node] = maxx(tree[left],tree[right]);
}
void update(int node, int beg ,int endd,int i, int x)
{
    if(beg == endd)
    {
        arr[i] = x;
        tree[node].mx1 = x;
        tree[node].mx2 = -1;
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (beg + endd) / 2;

    if(i <= mid) update(left, beg , mid, i , x);
    else update(right,mid + 1, endd , i, x);

    tree[node] = maxx(tree[left],tree[right]);
}
data query(int node, int beg, int endd, int l, int r)
{
    if(l <= beg && endd <= r)return tree[node];

    int left = node * 2;
    int right = left + 1;
    int mid = (beg + endd) / 2;

    if(r <= mid)return query(left, beg, mid, l , r);
    else if(l > mid)return query(right, mid + 1, endd, l , r);
    else{
        return maxx(query(left, beg, mid, l , r),query(right, mid + 1, endd, l , r));
    }
}
int main()
{
   int n, q, l ,r;
   data k;
   char c;
   scanf("%d",&n);
   for(int i = 1;i <= n;i++ )scanf("%d",&arr[i]);
   build(1,1,n);
   scanf("%d",&q);
   getchar();
   while(q--)
   {
       scanf("%c%d%d",&c,&l,&r);
       getchar();
       if(c == 'U') update(1,1,n,l,r);
       else
       {
           k = query(1 ,1 , n, l ,r);
           printf("%d\n",k.mx1 + k.mx2);
       }
   }
}

