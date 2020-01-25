#include<bits/stdc++.h>
using namespace std;
int idx,val,l,r;
vector<int>tree;
vector<int>vct;
void init(int n,int beg,int endd)
{
    if(beg == endd)tree[n] = vct[beg];
    else
    {
        int mid = (beg + endd)/2;
        int left = n * 2 ;
        int right = left + 1;
        init(left,beg,mid);
        init(right,mid+1,endd);
        tree[n] = tree[left] * tree[right];
    }
}
void update(int n,int beg,int endd)
{
    if(beg == endd)
    {
        vct[idx] = val;
        tree[n] = val;
    }
    else
    {
        int mid = (beg + endd)/2;
        int left = n * 2 ;
        int right = left + 1;
        if(idx <= mid) update(left, beg, mid);
        else update(right, mid + 1, endd);
        tree[n] = tree[left] * tree[right];

    }
}
int query(int n, int beg, int endd)
{
    if(l <= beg && endd <= r)
        return tree[n];
    else
    {
        int mid = (beg + endd)/2;
        int left = n * 2 ;
        int right = left + 1;
        if(r <= mid)return query(left, beg, mid);
        if(l > mid)return query(right,mid + 1,endd);
        return query(left, beg, mid) * query(right,mid + 1,endd);
    }
}
int convert(int n)
{
    if(n > 0 )return 1;
    if(n < 0)return -1;
    return n;
}
int main()
{
    int n,k,a,b;
    while(cin >> n >> k)
    {
        tree.clear();
        vct.clear();
        for(int i = 1; i <= n; i++)
        {
            cin >> a;
            vct.push_back(convert(a));
        }
        tree.assign(4 * n, 1);
        init(1,0,n-1);
        char c;
        string str = "";
        for(int i = 1; i <= k; i++)
        {
            cin >> c >> a >> b ;
            a--;
            if(c == 'C')
            {
                idx = a;
                val = convert(b);
                update(1,0,n-1);
            }
            else
            {
                b--;
                l = a;
                r = b;
                int res = query(1,0,n-1);
                if(res > 0)str += "+";
                if(res < 0)str += "-";
                if(res == 0)str += "0";
            }
        }
        cout << str << endl;
    }
    return 0;
}
