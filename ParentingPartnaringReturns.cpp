#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs = 1;
    cin >> test;
    while(test--)
    {
        int jstart[99999],jend[99999];
        int castart[99999],caend[99999];
        int start,endd, j = 0, c = 0;
        int n;
        cin >> n;
        cin >> start >> endd;
        jstart[0] = start;
        jend[0] = endd;
        j++;
        int res = 0;
        string str = "J";
        n--;
        while(n--)
        {
            cin >> start >> endd;
            int flag = 0;
            int rec1 = 0, rec2 = 0;
            for(int i = 0; i < j; i++)
            {
                if((start < jstart[i] && endd <= jend[i]) || start >= jend[i])
                {
                    jstart[j] = start;
                    jend[j] = endd;
                    j++;
                    str += "J";
                    flag = 1;
                    rec1 = 1;
                    break;
                }

            }
            if(flag == 0)
            {
                if(c == 0)
                {
                    castart[c] = start;
                    caend[c] = endd;
                    c++;
                    str += "C";
                    rec2 = 1;
                }
                else
                {
                    for(int i = 0; i < c; i++)
                    {
                        if((start < castart[i] && endd <= caend[i]) || start >= caend[i])
                        {
                            castart[c] = start;
                            caend[c] = endd;
                            c++;
                            str += "C";
                            rec2 = 1;
                            break;
                        }

                    }
                }
            }
            if(rec1 == 0 && rec2 == 0)res = 1;
        }
        if(res == 1)cout << "Case #" << cs++ << ": IMPOSSIBLE" << endl;
        else cout << "Case #" << cs++ << ": " << str << endl;
    }
}
