#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cs = 1,test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        vector<string>arr[20];
        string str;
        getchar();
        for(int j = 0; j < n; j++)
        {
            int sym;
            getline(cin,str);
            arr[j].push_back(str);
            cin >> sym;
            getchar();
            for(int i = 1; i <= sym; i++)
            {
                getline(cin,str);
                arr[j].push_back(str);
            }
        }
        set<string>st;
        int dissym;
        cin >> dissym;
        getchar();
        for(int i = 0; i < dissym; i++)
        {
            getline(cin,str);
            st.insert(str);
        }
        map<string , double>mp;
        map<string,double> :: iterator it;
        for(int i = 0; i < n; i++)
        {
            double cnt = 0.0;
            for(int j = 1; j < arr[i].size(); j++)
            {
                if(st.count(arr[i][j]) == 1)cnt++;
            }
            double val = arr[i].size()-1;
            double res = cnt/((dissym + (val - cnt)) * (1.0));
            mp[arr[i][0]] = res;
        }
        cout << "Case " << cs++ << ":\n";
        vector<pair <double, string> >finalResult;
        map<string,double>sec_result;
        for(it  = mp.begin(); it != mp.end();it++)
        {
          finalResult.push_back(make_pair(it->second,it->first));
        }
        sort(finalResult.begin(),finalResult.end());
        string temppp = "";
        double tempppp = 0.0;
        for(int i = 0; i < finalResult.size();i++)
        {
          if(finalResult[i].second == )
            cout << finalResult[i].second << " -> " << finalResult[i].first << endl;
        }
    }
}
