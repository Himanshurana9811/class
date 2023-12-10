#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
clrscr();
int gd= DETECT, gm;
initgraph(&gd,&gm, "c:\\TurboC3\\bgi");
for(int i=0; i<=10; i++)
{
delay(300);
setcolor(i);
line(100,100,150,50);
line(150,50,450,50);
line(450,50,500,100);
line(500,100,600,150);
line(600,150,600,200);
line(600,200,450,200);
line(200,200,400,200);
line(50,200,50,100);
line(50,100,100,100);//1
line(150,60,300,60);//a
line(300,60,300,100);//b
line(150,100,300,100);//c
line(150,100,150,60);//d
line(320,60,450,60);//e
line(445,60,485,100);//i
line(320,100,485,100);//j
line(320,100,485,100);//k
circle(425,200,25);//f
circle(175, 200, 25); //g
}
getch();
closegraph();
}