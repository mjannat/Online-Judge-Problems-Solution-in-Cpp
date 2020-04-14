#include<bits/stdc++.h>
using namespace std;

vector<int>  createTempArray(string pattern)
{
    vector<int>lps(pattern.length());
    int index = 0;
    for(int i = 1; i < pattern.length(); )
    {
        if(pattern[index] == pattern[i])
        {
            lps[i] = index + 1;
            ++index, ++i;
        }
        else
        {
            if(index != 0)
            {
                index = lps[index - 1];
            }
            else
            {
                lps[i] = index;
                ++i;
            }
        }
    }
    return lps;
}
void kmp(string text, string pattern)
{
    vector<int>lps = createTempArray(pattern);
    bool found = false;
    int i = 0, j = 0;
    while(i < text.length())
    {
        if(text[i] == pattern[j])i++,j++;
        else
        {
            if(j != 0) j = lps[j-1];
            else ++i;
        }
        if(j == pattern.length())
        {
          cout << "found" << endl;
          found = true;
          cout << "index :" << (i - pattern.length()) << endl;
          j = lps[j-1];
        }
    }
    if(found == false)
    {
        cout << "Not found" << endl;
    }
}
int main()
{

    string pattern,text;
    getline(cin,text);
    getline(cin,pattern);
    kmp(text,pattern);
}
