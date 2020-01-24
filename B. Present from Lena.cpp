#include<bits/stdc++.h>
using namespace std;
void printDiamond(int n)
{
    int space = n - 1;

    // run loop (parent loop)
    // till number of rows
    for (int i = 0; i < n; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            printf(" ");

        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            printf("%d ",j);

        printf("\n");
        space--;
    }

    // Repeat again in
    // reverse order
    space = 0;

    // run loop (parent loop)
    // till number of rows
    for (int i = n; i > 0; i--)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            printf(" ");

        // Print i stars
        for (int j = 0; j < i; j++)
            printf("%d ",j);
        printf("\n");
        space++;
    }
}

// Driver code
int main()
{
    printDiamond(5);
    return 0;
}
