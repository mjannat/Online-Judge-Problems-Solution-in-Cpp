#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for( int k = 1; k <= test ; k++)
    {
        int n, score = 0;
        cin >> n;
        vector< int >my_team(n), another_team(n);
        for(int i = 0; i < n; i++) cin >> my_team[i];
        for(int i = 0; i < n; i++) cin >> another_team[i];

        sort(my_team.begin(),my_team.end());
        sort(another_team.rbegin(), another_team.rend());

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)

                if (my_team[j] != -1)
                {
                    if ( my_team[j] > another_team[i])
                    {
                        score += 2;
                        my_team[j] = another_team[i] = -1;
                        break;

                    }

                }
        }

        for(int i = 0; i < n; i++)
            if(another_team[i] != -1)
            {
                for(int j = 0; j < n; j++)
                    if(my_team[j] != -1)
                    {
                        if ( my_team[j] == another_team[i])
                        {
                            score += 1;
                            my_team[j] = another_team[i] = -1;
                            break;

                        }
                    }

            }
        printf("Case %d: %d\n",k,score);
    }
    return 0;
}
