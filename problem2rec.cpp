#include<bits/stdc++.h>
using namespace std;
 int arr[6];
void func(int low,int high)
{
    if(low > high)
        return;
    else
    {
        cout << arr[low] << " " << arr[high] << endl;
        func(low++,high--);
    }
}
    int main()
    {
        int n = 5;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        func(0,n-1);
    }
