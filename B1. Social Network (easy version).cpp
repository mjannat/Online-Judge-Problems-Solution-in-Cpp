#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,val;
    cin >> n >> k;
    queue<int>st;
    map<int,int>mp;
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        cin >> val;
        if(mp[val] == 1)continue;
        else if(st.size() < k)
        {
            st.push(val);
            mp[val] = 1;
        }
        else if(st.size() == k)
        {
            mp[st.front()] = 0;
            st.pop();
            st.push(val);
            mp[val] = 1;

        }
    }
    int i = 0;
    cout << st.size() << endl;

    while(!st.empty())
    {
        arr[i++] = st.front();
        st.pop();
    }
    for(int j = i-1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}
