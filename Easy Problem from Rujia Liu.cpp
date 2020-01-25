#include<bits/stdc++.h>
using namespace std;

vector<int> vct[1000001];
int main()
{

    int m, n, k, v;
    while(scanf("%d %d",&m,&n)==2){
        for ( int i = 0; i < 1000001; i++ ) {
            vct[i].clear ();
        }
        for(int i = 1; i <= m; i++){
            scanf("%d",&v);
            vct[v].push_back (i);
        }
        for(int i = 0; i < n;i++){
            scanf ("%d %d", &k, &v);
             if ( vct[v].size() < k ) {
                printf("0\n");
             }
            else{
                printf("%d\n",vct[v] [k - 1]);
            }
        }
    }
}
