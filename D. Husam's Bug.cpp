#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string str;
        cin >> str;
        int letter = 0, digit = 0, sym = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))letter++;
            else if(str[i] >= '0' && str[i] <= '9')digit++;
            else if(str[i] == '@' || str[i] == '?' || str[i] == '!')sym++;
        }
        if(letter >= 4 && digit >= 4 && sym < 2)cout << "The last character must be a symbol." << endl;
        else if(letter >= 4 && digit < 4 && sym >= 2)cout <<"The last character must be a digit."<<endl;
        else if(letter < 4 && digit >= 4 && sym >= 2)cout <<"The last character must be a letter."<<endl;
        else cout << "The last character can be any type." << endl;
    }
}

