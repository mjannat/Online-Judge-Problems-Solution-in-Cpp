#include <iostream>
#include <graphics.h>

using namespace std;

void box(double xc, double yc, double height, double width)
{
    char c, *ch;
    int gd = DETECT, gm, line_num, i;
    double a1, a2, b1, b2, c1, c2, d1, d2;

    a1 = xc - (width/2);
    a2 = yc - (height/2);
    b1 = xc - (width/2) + width;
    b2 = yc - (height/2);
    c1 = xc - (width/2);
    c2 = yc + (height/2);
    d1 = xc - (width/2) + width;
    d2 = yc + (height/2);

    c = '\0';
    ch = &c;

    initgraph(&gd, &gm, ch);
    putpixel(xc, yc, WHITE);

    line(a1, a2, b1, b2);
    line(c1, c2, d1, d2);
    line(a1, a2, c1, c2);
    line(b1, b2, d1, d2);

    cout << "Enter the number of lines: ";
    cin >> line_num;

    cout << "Enter the co-ordinates :";
    double xy[line_num][4];

    for(i = 1; i <= line_num; i++)
    {
        cout << endl << "Start and End point of line " << i << " : ";
        cin >> xy[i][0] >> xy[i][1] >> xy[i][2] >> xy[i][3];
        line(xy[i][0], xy[i][1], xy[i][2], xy[i][3]);
    }
    getch();
    closegraph();
    return;
}

int main()
{
    double xc, yc, height, width;

    cout << "Enter the center of the box: ";
    cin >> xc >> yc;

    cout << "Enter the height and width of the box: ";
    cin >> height >> width;

    box(xc, yc, height, width);
    return 0;
}
