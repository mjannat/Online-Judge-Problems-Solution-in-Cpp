#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test,cs = 1;
    scanf("%lld",&test);
    while(test--)
    {
        ll n,m;
        string str;
        scanf("%lld %lld",&m,&n);
        cin >> str;
        cout << "Case " << cs++ << ": ";
        if(str == "FRIDAY")
        {
            if(n >= m)
            {
                string day[] = {"FRIDAY","SATURDAY","SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
            else
            {
                string day[] = {"FRIDAY","THURSDAY","WEDNESDAY","TUESDAY","MONDAY","SUNDAY","SATURDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
        }
        else if(str == "SATURDAY")
        {
            if(n >= m)
            {
                string day[] = {"SATURDAY","SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
            else
            {
                string day[] = {"SATURDAY","FRIDAY","THURSDAY","WEDNESDAY","TUESDAY","MONDAY","SUNDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
        }
        else if(str == "SUNDAY")
        {
            if(n >= m)
            {
                string day[] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
            else
            {
                string day[] = {"SUNDAY","SATURDAY","FRIDAY","THURSDAY","WEDNESDAY","TUESDAY","MONDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
        }
        else if(str == "MONDAY")
        {
            if(n >= m)
            {
                string day[] = {"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
            else
            {
                string day[] = {"MONDAY","SUNDAY","SATURDAY","FRIDAY","THURSDAY","WEDNESDAY","TUESDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
        }
        else if(str == "TUESDAY")
        {
            if(n >= m)
            {
                string day[] = {"TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY","MONDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
            else
            {
                string day[] = {"TUESDAY","MONDAY","SUNDAY","SATURDAY","FRIDAY","THURSDAY","WEDNESDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
        }
        else if(str == "WEDNESDAY")
        {
            if(n >= m)
            {
                string day[] = {"WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY","MONDAY","TUESDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
            else
            {
                string day[] = {"WEDNESDAY","TUESDAY","MONDAY","SUNDAY","SATURDAY","FRIDAY","THURSDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
        }
        else if(str == "THURSDAY")
        {
            if(n >= m)
            {
                string day[] = {"THURSDAY","FRIDAY","SATURDAY","SUNDAY","MONDAY","TUESDAY","WEDNESDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
            else
            {
                string day[] = {"THURSDAY","WEDNESDAY","TUESDAY","MONDAY","SUNDAY","SATURDAY","FRIDAY"};
                ll val = abs(n - m) + 1;
                ll tmp = val % 7;
                if(tmp == 0)cout << day[6] << endl;
                else cout << day[tmp - 1] << endl;
            }
        }
    }
}
