#include <stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
void bresenhamline(double x1, double x2, double y1, double y2)
{
    int dx, dy, p, endd;
    double x, y;
    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    p = 2 * dy - dx;
    if(x1 > x2)
    {
        x = x2;
        y = y2;
        endd = x1;
    }
    else
    {
        x = x1;
        y = y1;
        endd = x2;
    }
    putpixel(x, y, RED);
    while(x < endd)
    {
        x++;
        if(p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {

            y = y + 1;
            p = p + 2 * (dy - dx);
        }
        putpixel(x, y, 10);
    }
}
int main()
{
    int gd = DETECT, gm;
    double x1, x2, y1, y2, x, y;
    initgraph(&gd, &gm,"");
    printf("Enter Value of x1: ");
    scanf("%lf",&x1);
    printf("Enter Value of x2: ");
    scanf("%lf",&x2);
    printf("Enter Value of y1: ");
    scanf("%lf",&y1);
    printf("Enter Value of y2: ");
    scanf("%lf",&y2);
    bresenhamline(x1,x2,y1,y2);
    getch();
    closegraph();
    return 0;
}
