#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cal(ll a, ll b, char c)
{
    if( c == '+')return a + b;
    else if (c == '-') return a - b;
    else if(c == '*')return a * b;
    else return a / b;

}
int main()
{
    ll n, i = 1,res;
    scanf("%lld",&n);
    string str;
    ll val;
    stack< char >st;
    stack< ll >num;
    while(n--)
    {
        cin >> str;
        scanf("%lld",&val);
        if(str == "multiply")st.push('/');
        else if(str == "add")st.push('-');
        else if(str == "subtract")st.push('+');
        else st.push('*');
        num.push(val);
    }
    scanf("%lld",&res);
    while(!st.empty())
    {
        res = cal(res,num.top(),st.top());
        st.pop(),num.pop();
    }
    cout << res << endl;
}

