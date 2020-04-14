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
int kmp(string text, string pattern)
{
    int best = 0, result = 0, ans = 0;
    vector<int>lps = createTempArray(pattern);
    int i = 0, j = 0;
    while(i < (int)text.length())
    {
        if(text[i] == pattern[j])
        {
            i++,j++;
            best++;
        }
        else
        {
            best = 0;
            if(j != 0) j = lps[j-1];
            else ++i;
        }
        if(best > result)
        {
            result = best;
            ans = i - j;
        }
        if(j == (int)pattern.length())
        {
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    getchar();
    string pattern,text;
    getline(cin,text);
    getline(cin,pattern);
    int res = 0;
    pattern += pattern;
    res =  kmp(pattern,text);
    cout << res << endl;
}

