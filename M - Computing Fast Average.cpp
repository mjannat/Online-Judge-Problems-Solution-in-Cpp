#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Max 100005
ll  arr[Max];
struct data
{
    ll  sum , lazy;
    bool lazyflag;
} tree[Max*4];
void pushDown(ll node, ll left,ll right, ll beg,ll mid,ll endd)
{
    tree[left].sum = tree[node].lazy * (mid - beg +1);
    tree[right].sum = tree[node].lazy *(endd - mid);

    tree[left].lazy = tree[node].lazy;
    tree[left].lazyflag = true;

    tree[right].lazy = tree[node].lazy;
    tree[right].lazyflag = true;

    tree[node].lazy = 0;
    tree[node].lazyflag = false;
}
void update (ll  node, ll  beg, ll  endd, ll  x, ll  y, ll  val)
{
    if(x > y)return;
    if(beg == x && endd == y)
    {
        tree[node].sum = val * (endd - beg +1);
        tree[node].lazy = val;
        tree[node].lazyflag = true;
        return;
    }
    ll  left = node * 2;
    ll  right = left + 1;
    ll  mid = (beg + endd) / 2;

    if(tree[node].lazyflag) pushDown(node, left, right, beg, mid, endd);
    update(left, beg, mid, x, min(y, mid), val);
    update(right, mid+1, endd, max(x, mid+1), y, val);
    tree[node].sum = tree[left].sum + tree[right].sum;
}
ll query(ll node,ll beg,ll endd,ll x,ll y)
{
    if(x > y) return 0;
    if(beg == x && endd == y) return tree[node].sum;

    ll  left = node * 2;
    ll  right = left + 1;
    ll  mid = (beg + endd) / 2;

    if(tree[node].lazyflag) pushDown(node, left, right, beg, mid, endd);
    ll l = query(left, beg, mid, x, min(y, mid));
    ll r = query(right, mid+1, endd, max(x, mid+1), y);
    return l + r;
}
int main()
{
    ll  test;
    scanf("%lld",&test);
    for(ll  i = 1; i <= test; i++)
    {
        ll  n,q,x,y,val,st;
        scanf("%lld %lld",&n,&q);
        memset(tree,0, sizeof tree);
        printf("Case %lld:\n", i);
        while(q--)
        {
            scanf("%lld",&st);
            if(st == 1)
            {
                scanf("%lld %lld %lld",&x,&y,&val);
                x++;
                y++;
                update(1,1,n,x,y,val);
            }
            else
            {
                scanf("%lld %lld",&x,&y);
                x++;
                y++;
                ll  res = query(1,1,n,x,y);
                ll  tmp = (y - x)+1;
                if(res % tmp == 0)printf("%lld\n",res/tmp);
                else
                {
                    ll  g = __gcd(res,tmp);
                    printf("%lld/%lld\n",res/g,tmp/g);

                }
            }
        }
    }
}
