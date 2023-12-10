// 350 75
//50
#include <stdio.h>
#include <\conio.h>
#include <graphics.h>
void circlePlotPoint(int xc, int yc, int x, int y)
{
putpixel(xc + x, yc + y, 3);
putpixel(xc - x, yc + y, 4);
putpixel(xc + x, yc - y, 5);
putpixel(xc - x, yc - y, 8);
putpixel(xc + y, yc + x, 3);
putpixel(xc - y, yc + x, 4);
putpixel(xc + y, yc - x, 5);
putpixel(xc - y, yc - x, 8);
}
int main()
{
int gd = DETECT, gm, x = 0, radius, xc, yc, y, p;
initgraph(&gd, &gm, "C:\\TC\\BGI");
setbkcolor(BLACK);
setcolor(BLUE);
outtextxy(200, 10, "BRESENHAM'S CIRCLE GENERATION ALGORITHM");
printf("\n EnterThe Value(xc and yc): ");
scanf("%d, %d", &xc, &yc);
printf("Enter Radius: ");
scanf("%d", &radius);
cleardevice();
outtextxy(200, 10, "BRESENHAM'S CICLE GENERATION ALGORITHM");
y = radius;
p = 3 - 2 * radius;
while (x < y)
{
x++;
if (p < 0)
{
p = p + 4 * x + 6;
}
else
{
y--;
p = p + 4 * (x - y) + 10;
}
circlePlotPoint(xc, yc, x, y);
delay(200);
}
getch();
closegraph();
}
