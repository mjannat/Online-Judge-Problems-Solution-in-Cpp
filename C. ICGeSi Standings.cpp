#include<bits/stdc++.h>
using namespace std;
 vector<tuple <int, int, int> > bef;
        vector<tuple <int, int, int> > after;
        vector<tuple <int, int, int> > :: const_iterator it;
        vector<tuple <int, int, int> > :: const_iterator itr;
int main()
{
    int cs = 1,test;
    cin >> test;
    while(test--)
    {
        int n, flag = 0;

        int id,solved,penalty,after_solved,after_penalty[200];
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> id >> solved >> penalty >> after_solved;
            bef.push_back(make_tuple(id,solved,penalty));
            int total = 0;
            for(int i = 0; i < after_solved; i++)
            {
                int temp;
                cin >> temp;
                total += temp;
            }
            after.push_back(make_tuple(id,after_solved + solved,total + penalty));
        }
        int ranking[200];
        for(int i = 0; i < n; i++)
        {
            cin >> ranking[i];
        }
        int mx = -1;
        for(int i = 1; i < n; i++)
        {
            int solved_1, solved_2,penalty_1,penalty_2;
            for(itr = after.begin(); itr != after.end(); itr++)
            {
                int tmp = get<0>(*itr);
                if(tmp == ranking[i-1])
                {
                    solved_1 = get<1>(*itr);
                    penalty_1 = get<2>(*itr);
                     mx = (solved_1,mx);

                }

            }
            for(it = bef.begin(); it != bef.end(); it++)
            {
                int tmp = get<0>(*it);
                if(tmp == ranking[i])
                {
                    solved_2 = get<1>(*it);
                    penalty_2 = get<2>(*it);
                }

            }
            if(solved_1 > solved_2 )
            {
                continue;
            }
            else if(solved_1 < solved_2 || solved_2 > mx)flag = 1;
            else if(solved_1 == solved_2)
            {
                if(penalty_1 == penalty_2)
                    continue;
                else if(penalty_1 > penalty_2 )
                {
                    flag = 1;

                }
            }


        }
        if(flag == 1)
        {
            cout << "Case " << cs++ << ": Say no to rumour >:\n";

        }
        else
        {
            cout << "Case " << cs++ << ": We respect our judges :)\n";
        }

    }
}

