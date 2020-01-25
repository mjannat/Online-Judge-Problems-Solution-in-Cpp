#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 int len, m;
 cin >> len;
 string str;
 cin >> str;
 int arr[10];
 for(int i = 1; i <= 9;i++)cin >> arr[i];
int flag = 0;
 for(int i = 0;i < str.size();i++)
 {
     m = str[i] - 48;
     if(arr[m] > m)
     {
      flag = 1;
      str[i] = 48 + arr[m];
     }
     else if(flag  == 1 && arr[m] < m){
        cout << str << endl;
        return 0;
     }
 }
 cout << str << endl;

}

