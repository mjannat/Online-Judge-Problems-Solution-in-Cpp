#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while(n--)
    {
        int f = 0;
        cin >> s;
        set <char> st;
        for(int i = 0; i < s.size(); i++) st.insert(s[i]);
        sort(s.begin(), s.end());
        if(st.size() == s.size())
        {
            for(int j = 0; j < s.size()-1; j++)
            {
                if(s[j+1] - s[j] > 1)
                {
                    cout << "No" << endl;
                    f = 1;
                    break;
                }
            }
            if(!f) cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
