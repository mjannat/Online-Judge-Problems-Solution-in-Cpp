
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string arr[n];
    string second[n];
    int large=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if((arr[i].size())==2)
        {
            second[i]="baa";
            //cout<<second<<" ";
        }
        else
        {

           string temp = "";
            if((arr[i].size())%2 == 0)
            {
                temp = "";
                for( j=0;j<arr[i].size()-1;j++)
                {
                    temp+=arr[i][j];
                }
                second[i] = temp;
            }
            else
            {
              string temp = "";
                for(j=0;j<arr[i].size();j++)
                {
                     temp+=arr[i][j];
                }
                second[i] = temp;
            }
       }

    }

    for(i=0;i<n;i++)
    {
        cout<<second[i]<<endl;
    }
     /*for(int i=0;i<n;i++)
 {
     if(large<second[i].size())
        {
            large=second[i].size();
        }
 }
 large=((large+1)/2);



    for(int i=0;i<n;i++)
    {
         c=(1+(second[i].size()))/2;
         c=large-c;
       for(int j=0;j<c;j++)
       {
           cout<<" ";
       }
       cout<<second[i]<<endl;


    }*/

    return 0;

 }
