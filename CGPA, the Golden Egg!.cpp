#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    scanf("%d",&test);
    while(test--)
    {
        int n, fail = 0;
        double sum = 0.0, res = 0.0, credit, marks, course = 0.0;
        cin >> n;
        while(n--)
        {
            cin >> marks >> credit;
            course += credit;
            if(marks >= 80)
            {
                sum += (4.0 * credit);
            }
            else if(marks >= 75)
            {
                sum += (3.75 * credit);
            }
            else if(marks >= 70)
            {
                sum += (3.50 * credit);
            }
            else if(marks >= 65)
            {
                sum += (3.25 * credit);
            }
            else if(marks >= 60)
            {
                sum += (3.00 * credit);
            }
            else if(marks >= 55)
            {
                sum += (2.75 * credit);
            }
            else if(marks >= 50)
            {
                sum += (2.50 * credit);
            }
            else if(marks >= 45)
            {
                sum += (2.25 * credit);
            }
            else if(marks >= 45)
            {
                sum += (2.25 * credit);
            }
            else if(marks >= 40)
            {
                sum += (2.00 * credit);
            }
            else fail++;
        }
        res = sum / course;
        printf("Case %d: ", cs++);
        if(fail == 1)printf("Sorry, you have failed in 1 course!\n");
        else if(fail > 1) printf("Sorry, you have failed in %d courses!\n", fail);
        else printf("%.2lf\n",res);
    }
}
