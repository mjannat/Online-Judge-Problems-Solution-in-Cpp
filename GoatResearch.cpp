#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = -1;
    scanf("%d",&n);
    string str[n+1],input;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        string temp = "";
        if(input.size() % 2 == 0 && input.size() > 3)
        {
            for(int j = 0; j < input.size() - 1; j++)
            {
                temp += input[j];
            }
            str[i] = temp;
        }
        else if(input.size() == 2)
        {
            input += 'a';
            str[i] = input;
        }
        else
        {
            str[i] = input;
        }
        int len = str[i].size();
        mx = max(len,mx);
    }
    for(int i = 0; i < n; i++)
    {
        if(str[i].size() < mx)
        {
            int tmp = (mx - str[i].size())/2;
            for(int j = 0; j < tmp;j++)cout <<" ";
            cout << str[i] << endl;
        }
        else {
            cout << str[i] << endl;
        }
    }
}
