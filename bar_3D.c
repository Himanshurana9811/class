#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
int gd = DETECT, gm;
clrscr();
initgraph(&gd, &gm, "C:\TURBOC3\BIN");
setcolor(GREEN);
setfillstyle(SOLID_FILL, RED);
bar(20, 30, 200, 400);
moveto(250, 50);
setfillstyle(LTSLASH_FILL, GREEN);
bar3d(150, 100, 200, 200, 20, 1);
getch();
closegraph();
restorecrtmode();
return ();
}
