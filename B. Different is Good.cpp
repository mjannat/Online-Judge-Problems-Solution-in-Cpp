#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    set <char> st;
    for(int i = 0; i < n; i++) st.insert(s[i]);
    if(n > 26) cout << -1 << endl;
    else cout << n - st.size() << endl;
}
