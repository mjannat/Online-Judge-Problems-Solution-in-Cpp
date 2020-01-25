#include<bits/stdc++.h>
using namespace std;
void combination(int arr[], int n, int r, int index, int data[], int i)
{
    if (index == r) {
        for (int j = 0; j < r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }

    // When no more elements are there to put in data[]
    if (i >= n)
        return;

    // current is included, put next at next location
    data[index] = arr[i];
    combination(arr, n, r, index + 1, data, i + 1);

    // current is excluded, replace it with next
    // (Note that i+1 is passed, but index is not
    // changed)
    combination(arr, n, r, index, data, i + 1);
}

// Driver program to test above functions
int main()
{

   int len;
   cin >> len;
   int arr[len+1];
   for(int i = 0;i < len;i++)cin >> arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
   for(int  i = 1; i <= n; i++)combination(arr, n, i);
    return 0;
}
