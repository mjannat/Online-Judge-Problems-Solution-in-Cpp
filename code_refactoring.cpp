#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("coderefactoring.txt","w",stdout);
    int test,cs = 1;
    cin >> test;
    while(test--)
    {
        int n,cnt = 0;
        cin >> n;
        cout << "Case #" << cs++ << ": " << n << " = ";
        for(int i = 2;  ; i++)
        {
            if(n % i == 0 && cnt == 0)
            {
                cout << i << " * " << n/i << " = ";
                cnt++;
            }
            else if(n % i == 0)
            {
                cout << i << " * " << n/i << endl;
                break;
            }

        }
    }
    return 0;
}
