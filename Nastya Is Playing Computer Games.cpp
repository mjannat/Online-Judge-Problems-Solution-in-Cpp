#include<bits/stdc++.h>
using namespace std;
int arr[1000009];
int main()
{
   int n,k;
   cin >> n >> k;
   cout << ( n * 3 ) + min((k - 1),(n - k)) << endl;
}
