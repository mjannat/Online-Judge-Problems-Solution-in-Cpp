#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int arr[4];
    arr[0] = 1;
    arr[1] = 4;
    arr[2] = 3;
    do
    {
        cout << arr[0] << " " << arr[1] <<" "<< arr[2] << endl;

    }while(next_permutation(arr,arr+3));
}
