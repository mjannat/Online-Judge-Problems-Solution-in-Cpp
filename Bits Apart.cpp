#include<bits/stdc++.h>
using namespace std;
int decToBinary(int n)
{
    for (int i = 7; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}
int main()
{
    int n,flag=0,st_flag=0;
    string s;
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0) flag++;
    }
    if(flag==n)
    {
        cout<<"Distance Between Two Bits is : -1"<<endl;
    }
    else
    {
        int start = 0, start_pos = 0,final_pos = 0,finall;
        for(i=0; i<n; i++)
        {
            if(a[i] != 0 && st_flag == 0)
            {
                start = a[i];
                start_pos = i;
                break;
            }
        }
        for(i=n-1; i >= 0; i--)
        {
           if(a[i] !=0 && st_flag == 1)
            {
             finall = a[i];
             final_pos = i ;
             break;
            }
        }
    }
}
