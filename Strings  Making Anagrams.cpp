
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    int countt = 0;
    int track[200] = {0};
    int track2[200] = {0};
    for(int i = 0; i < str1.size();i++)
    {
        track[str1[i]]++;
    }
    for(int i = 0; i < str2.size();i++)
    {
        track2[str2[i]]++;
    }
    for(int i = 97; i < 140;i++)
    {
       if(track2[i] == track[i])
       {
           continue;
       }
       else if(track2[i] != 0 && track[i] != 0)
       {
        countt += abs(track2[i] - track[i]);
       }
       else
       {
          countt += track2[i];
          countt += track[i];
       }
    }
    cout << countt << endl;

}
