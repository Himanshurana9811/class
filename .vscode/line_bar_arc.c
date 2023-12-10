#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
int gd = DETECT, gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
line(350,100,170,140);
outtextxy(300,80,"LINE");
arc(100,200,200,20,40);
outtextxy(125,100,"ARC");
bar(300,380,340,310);
outtextxy(380,360,"BAR");
getch();
}