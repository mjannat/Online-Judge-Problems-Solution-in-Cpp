#include <stdio.h>

int reg[7], p;
char cmd[10][4] = {"LOD", "INC", "ADD", "MUL", "JMP", "CMP", "JCZ", "JCP", "JCN", "HLT"};

struct ins
{
    char r1, r2;
    int x, cmdn;
} in[1010];

int pos(const char s[4])
{
    for(int i = 0; i < 10; ++i)
        if((s[0]==cmd[i][0]) && (s[1]==cmd[i][1]) && (s[2]==cmd[i][2])) return i;
}

recordIns(const char s[4])
{
    char r1, r2;
    int x, i = pos(s);
    if (i > 8) scanf("\n");
    else if (i < 1)
    {
        scanf(" %c %d\n", &r1, &x);
    }
    else if (i < 2)
    {
        scanf(" %c\n", &r1);
    }
    else if ((i < 6) && (i != 4))
    {
        scanf(" %c %c\n", &r1, &r2);
    }
    else
    {
        scanf(" %d\n", &x);
    }
    if(r1 == 'P') r1 = 'G';
    if(r2 == 'P') r2 = 'G';
    in[p].r1 = r1;
    in[p].r2 = r2;
    in[p].x = x;
    in[p].cmdn = i;
    ++p;
}

readIns()
{
    char r1 = in[p].r1, r2 = in[p].r2;
    int x = in[p].x, c = in[p].cmdn;
    if (c < 1)
    {
        reg[r1-'A'] = x;
    }
    else if (c < 2)
    {
        ++reg[r1-'A'];
    }
    else if (c < 3)
    {
        reg[r1-'A'] += reg[r2-'A'];
    }
    else if (c < 4)
    {
        reg[r1-'A'] *= reg[r2-'A'];
    }
    else if (c < 5)
    {
        reg[6] = x-1;
    }
    else if (c < 6)
    {
        reg[2] = (reg[r1-'A'] > reg[r2-'A']) ? 1 : (reg[r1-'A'] < reg[r2-'A']) ? -1 : 0;
    }
    else if (c < 7)
    {
        if (reg[2] == 0) reg[6] = x-1;
    }
    else if (c < 8)
    {
        if (reg[2] > 0) reg[6] = x-1;
    }
    else if (c < 9)
    {
        if (reg[2] < 0) reg[6] = x-1;
    }
}

int main()
{
    char s[4];

    while(scanf("%s",s) != EOF)
    {
        recordIns(s);
    }

    reg[6] = p = 0;
    while(in[p].cmdn < 9)
    {
        readIns();
        p = ++reg[6];
    }

    for(int i = 0; i < 6; ++i)
        printf("%d ",reg[i]);
    printf("%d", reg[6]);

    return 0;
}z
