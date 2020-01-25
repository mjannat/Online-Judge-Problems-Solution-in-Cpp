#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stack< char >st;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if(st.empty())
            {
                printf("No\n");
                return 0;
            }
            else
            {
                if(str[i] == ')')
                {
                    if(st.top() == '(')
                    {
                        st.pop();
                    }
                }
                else if(str[i] == '}')
                {
                    if(st.top() == '{')
                    {
                        st.pop();
                    }
                }
                else if(str[i] == ']')
                {
                    if(st.top() == '[')
                    {
                        st.pop();
                    }
                }
            }
        }
    }
    if(st.empty())printf("Yes\n");
    else printf("No\n");
}
