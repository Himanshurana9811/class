// 100 200
// 350 450
// 420 350
// -50 -40
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT, gm;
int x, y, x1, y1, x2, y2, tx, ty;
clrscr();
initgraph(&gd, &gm, "C:\\TC\\BGI");
printf("Enter First Coordinate of Triangle: ");
scanf("%d %d", &x, &y);
printf("Enter Second Coordinate of Triangle: ");
scanf("%d %d", &x1, &y1);
printf("Enter Third Coordinate of Triangle: ");
scanf("%d %d", &x2, &y2);
printf("Triangle Before & After Translation: ");
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
printf("\nEnter the Translation Vector: ");
scanf("%d %d", &tx, &ty);
setcolor(RED);
line(x+tx, y+ty, x1+tx, y1+ty);
line(x1+tx, y1+ty, x2+tx, y2+ty);
line(x2+tx, y2+ty, x+tx, y+ty);
getch();
closegraph();
}
