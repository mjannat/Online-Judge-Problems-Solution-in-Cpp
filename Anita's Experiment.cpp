#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,Asflag = 0, dsflag = 0;
        cin >> n;
        int arr[n+1];
        set< int >st;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        for(int i = 1,j = n-1; i < n, j > 0; i++,j--)
        {
            if(arr[i] < arr[i-1])Asflag = 1;
            else if(arr[i] > arr[i-1])dsflag = 1;
        }
        if(st.size() == 1)
        {
            cout << "neutral\n";
        }
        else if(Asflag == 0)
        {
            cout << "allGoodDays\n";
        }
        else if (dsflag == 0)
        {
            cout << "allBadDays\n";
        }
        else
        {
            int mx = -1,flag = 0;
            for(int i = 1; i < n-1; i++)
            {
                if(arr[i - 1] < arr[i] && arr[i] > arr[i+1])
                {
                    if(flag == 0)
                    {
                        flag = i+1;
                    }
                    else
                    {
                        int tmp = i+1;
                        mx = max(mx, ((tmp - flag) - 1));
                        flag = tmp;
                    }
                }
            }
            if(mx == -1)cout << "none\n";
            else cout << mx << endl;
        }
    }
}
