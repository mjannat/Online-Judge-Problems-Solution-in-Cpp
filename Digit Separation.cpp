#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 string str;
 while(cin >> str){
 ll sum = 0;
 for(int i = 0;i < str.size();i++)
 {
    sum += str[i] - '0';
 }
 cout << sum << endl;
 }
}
