#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph (&gd,&gm,"C:\\TurboC3\\BGI");
circle(300,220,150);
circle(230,158,30);
circle(370,158,30);
arc(300,200,201,340,105);
 delay(100);
getch();
closegraph();
}

