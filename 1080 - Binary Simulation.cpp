#include<bits/stdc++.h>
using namespace std;
#define mx 100001
char arr[mx];
char tree[mx*4];
int toggle[mx*4];

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

    init(left , beg , mid);
    init(right , mid + 1, endd);

    toggle[node] = toggle[left] = toggle[right] = 0;
}

int query(int node , int beg ,int endd, int i, int counter)
{
    counter += toggle[node];
  if(x > endd || x < beg) return;
  if(beg == x && endd == x)
  int ans = arr[beg];
  int left = node * 2;
  int right = node * 2 + 1;
  int mid = (beg + endd) / 2;

  if(counter % 2 == 1)
  {
      ans = !ans;
      return ans;
  }

  int l = query(left , beg , mid , i, counter);
  int r = query(right , mid + 1, endd, i , counter);
}
void update(int node, int beg, int endd, int i, int newvalue)
{
    if(i > endd || i < beg) return;
    if(beg >= i && endd <= i)
    {
        tree[node]++;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd)/2;

    update(left , beg , mid , i , newvalue);
    update(right , mid + 1, endd, i ,newvalue);

  //  tree[node] = tree[left] + tree[right];
}
int main()
{
    int test;
     cin >> test;
     for(int k = 1;k <= test ;k++)
     {
         int n,q;
         scanf("%d%d",&n,&q);
         for(int b = 0;b < n;b++)scanf("%d",&arr[b]);
         init(1,0,n-1);
         printf("Case %d:\n",k);
         for(int a = 1;a <= q;a++)
         {
             int num;
             scanf("%d",&num);
             if(num == 1)
             {
                 int m;
                 scanf("%d",&m);
                  printf("%d\n",arr[m]);
                 arr[m] = 0;
                 update(1,0,n-1,m,0);
             }
             else if(num == 2)
             {
                 int m,s;
                 scanf("%d%d",&m,&s);
                 arr[m] = arr[m]+s;
                 update(1,0,n-1,m,arr[m]);
             }
             else
             {
                 int m,s;
                  scanf("%d%d",&m,&s);
                  printf("%d\n",query(1,0,n-1,m,s));
             }
         }
     }
  return 0;
}

