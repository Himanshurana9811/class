#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
void translation();
void rotation();
void scalling();
void triangle();
void quadrant();
void main()
{
  int gm;
  int gd = DETECT;
  int x1, x2, x3, y1, y2, y3, c;
  initgraph(&gd, &gm, "");
  printf("\nEnter the point of triangle (x1,y1):"); // 240 160
  scanf("%d %d", &x1, &y1);
  printf("\nEnter the point of triangle (x2,y2):"); // 240 240
  scanf("%d %d", &x2, &y2);
  printf("\nEnter the point of triangle (x3,y3):"); // 320 240
  scanf("%d %d", &x3, &y3);
  clrscr();
  cleardevice();
  setbkcolor(0);
  triangle(x1, y1, x2, y2, x3, y3);
  while (1)
  {
    printf("\n 1.Transaction\n 2.Rotation\n 3.Scalling\n 4.exit \n");
    printf("\nEnter your choice:");
    scanf("%d", &c);
    clrscr();
    cleardevice();
    quadrant();
    switch (c)
    {
    case 1:
      triangle(x1, y1, x2, y2, x3, y3);
      translation(x1, y1, x2, y2, x3, y3);
      getch();
      break;
    case 2:
      triangle(x1, y1, x2, y2, x3, y3);
      rotation(x1, y1, x2, y2, x3, y3);
      getch();
      break;
    case 3:
      triangle(x1, y1, x2, y2, x3, y3);
      scalling(x1, y1, x2, y2, x3, y3);
      getch();
      break;
    case 4:
      exit(1);
      break;
    default:
      printf("!Enter the correct choice!");
    }
    clrscr();
    cleardevice();
    getch();
  }
}
void quadrant()
{
  line(320, 0, 320, 479);
  line(0, 240, 639, 240);
}
void triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
  line(x1, y1, x2, y2);
  line(x2, y2, x3, y3);
  line(x3, y3, x1, y1);
}
void translation(int x1, int y1, int x2, int y2, int x3, int y3)
{
  int nx1, nx2, nx3, ny1, ny2, ny3;
  int xt, yt;
  printf("\n Enter the translation factor xt & yt:");//50 50
  scanf("%d %d", &xt, &yt);
  cleardevice();
  quadrant();
  nx1 = x1 + xt;
  ny1 = y1 + yt;
  nx2 = x2 + xt;
  ny2 = y2 + yt;
  nx3 = x3 + xt;
  ny3 = y3 + yt;
  line(nx1, ny1, nx2, ny2);
  line(nx2, ny2, nx3, ny3);
  line(nx3, ny3, nx1, ny1);
}
void rotation(int x1, int y1, int x2, int y2, int x3, int y3)
{
  int nx1, nx2, nx3, ny1, ny2, ny3;
  float t, r;
  printf("\n Enter the angle of rotation :");// 45
  scanf("%f", &r);
  cleardevice();
  quadrant();
  t = (r * (3.14)) / 180;
  nx1 = x2 + ((x1 - x2) * cos(t) - (y1 - y2) * sin(t));
  ny1 = y2 + ((x1 - x2) * sin(t) + (y1 - y2) * cos(t));
  nx2 = x2 + ((x2 - x2) * cos(t) - (y2 - y2) * sin(t));
  ny2 = y2 + ((x2 - x2) * sin(t) + (y2 - y2) * cos(t));
  nx3 = x2 + ((x3 - x2) * cos(t) - (y3 - y2) * sin(t));
  ny3 = y2 + ((x3 - x2) * sin(t) + (y3 - y2) * cos(t));
  line(nx1, ny1, nx2, ny2);
  line(nx2, ny2, nx3, ny3);
  line(nx3, ny3, nx1, ny1);
}
void scalling(int x1, int y1, int x2, int y2, int x3, int y3)
{
  int nx1, nx2, nx3, ny1, ny2, ny3;
  float sx, sy;
  printf("\n Enter the scalling factor sx & sy:");//0.5 0.5
  scanf("%f %f", &sx, &sy);
  cleardevice();
  quadrant();
  nx1 = x1 * sx;
  ny1 = y1 * sy;
  nx2 = x2 * sx;
  ny2 = y2 * sy;
  nx3 = x3 * sx;
  ny3 = y3 * sy;
  line(nx1, ny1, nx2, ny2);
  line(nx2, ny2, nx3, ny3);
  line(nx3, ny3, nx1, ny1);
}
