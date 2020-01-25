#include<bits/stdc++.h>
using namespace std;
#define MAX 100002

int arr[MAX];
struct NODE
{
  int mn;
  int mx;
}tree[MAX*4];

void init(int node, int beg, int endd)
{
   if(beg == endd)
   {
       tree[node].mn = arr[beg];
       tree[node].mx = arr[beg];
       return;
   }
   int left =  node * 2;
   int right = left + 1;
   int mid =  (beg + endd)/2;

   init(left, beg , mid);
   init(right, mid+1, endd);

   tree[node].mn = min(tree[left].mn,tree[right].mn);
   tree[node].mx = max(tree[left].mx,tree[right].mx);

}

NODE  query(int node, int beg ,int endd,int i,int j)
{
   if(j < beg || i > endd)
   {
       NODE  tmp;
       tmp.mn = 10000000000;
       tmp.mx = -1;
       return tmp;
   }
   if(beg >= i && endd <= j)return tree[node];

    int left = node * 2;
   int right = left + 1;
   int mid =  (beg + endd)/2;

   NODE  p1 = query(left, beg , mid , i, j);
   NODE  p2 = query(right, mid + 1, endd, i, j);

   NODE  p3;
   p3.mx = max(p1.mx,p2.mx);
   p3.mn = min(p1.mn,p2.mn);

   return p3;
}
int main()
{
   int test, n ,d;
   scanf("%d",&test);

   for(int  k = 1; k <= test; k++)
   {
    scanf("%d%d",&n,&d);
    for(int i = 1;i <= n; i++)scanf("%d",&arr[i]);

    init(1,1,n);
    int ans = 0;
    NODE  ret;
    for(int i = 1;i+d-1<= n; i++)
    {
        ret = query(1,1,n,i,i+d-1);
        ans = max(ans,ret.mx - ret.mn);
    }
       printf("Case %d: %d\n",k,ans);
   }
}
