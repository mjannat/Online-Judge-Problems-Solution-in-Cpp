#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[26][26];
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) cin >> arr[i][j];
    }
    int cnt = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((arr[i][j] == '.') && (arr[i][j+1] != '*') && (arr[i][j-1] != '*') && (arr[i-1][j] != '*') && (arr[i+1][j] != '*'))cnt++;
        }
    }
    cout << cnt << endl;
}
