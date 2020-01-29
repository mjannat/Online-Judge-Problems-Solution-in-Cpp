#include<bits/stdc++.h>
using namespace std;
#define MAX 101
int parent[MAX];
void make_set(int x)
{
    parent[x] = x;
}
int find_root(int rep)
{
    if(parent[rep] == rep)
    {
        return rep;
    }
    return parent[rep] = find_root(parent[rep]);
}
void union_find(int x,int y)
{
    int u = find_root(x);
    int v = find_root(y);

    if(u == v)
    {
        printf("Already Friends");
    }
    else
    {
        printf("Not Friends\n");
        parent[u] = v;
    }
}
int main()
{

}
