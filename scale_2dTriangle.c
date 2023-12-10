// 90 120
//140 150
// 200 250
// 2 2

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int x, y, x1, y1, x2, y2;
int scl_ftx, scl_fty;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
printf("scaling\n");
printf("Enter first coodinate of triangle: ");
scanf("%d %d", &x, &y);
printf("Enter second coodinate of triangle: ");
scanf("%d %d", &x1, &y1);
printf("Enter third coodinate of triangle: ");
scanf("%d %d", &x2, &y2);
line(x, y, x1, y1);
line(x1, y1, x2, y2);
line(x2, y2, x, y);
printf("Enter scaling factor x & y ");
scanf("%d %d", &scl_ftx, &scl_fty);
x = x * scl_ftx;
x1 = x1 * scl_ftx;
x2 = x2 * scl_ftx;
y = y * scl_fty;
y1 = y1 * scl_fty;
y2 = y2 * scl_fty;
line(x, y, x1, y1);
line(x1, y1, x2, y2);
line(x2, y2, x, y);
getch();
delay(100);
closegraph();
}