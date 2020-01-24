#include<bits/stdc++.h>
using namespace std;
int tree[400005],x,y;
int arr[400005];
void init(int beg,int endd, int node)
{
    if(beg >= endd )
    {
        if(beg == endd)tree[node] = arr[beg];
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd) / 2;

    init(beg, mid, left);
    init(mid+1, endd, right);            ;

    tree[node] = min(tree[left],tree[right]);
}
int query(int beg, int endd, int node){
    if(beg >= x && endd <= y) return tree[node];
    int mid = (beg + endd)/2;
   int  left = node*2;
   int right = node*2+1;
    int l = query(beg, mid, left);
    int r = query(mid+1, endd, right);
    return min(l, r);
}
int main(){
    int cs = 0, n, q, t;
    scanf("%d", &t);
    while(t--){

        scanf("%d%d", &n, &q);
        for(int i = 1; i <= n; i++)scanf("%d", &arr[i]);
        init(1, n, 1);
        printf("Case %d:\n", ++cs);
        for(int i = 1; i <= q; i++){
            scanf("%d%d", &x, &y);
            printf("%d\n", query(1, n, 1));
        }
    }
    return 0;
}
