#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void main()
{
  int gd = DETECT, gm, c;
  int x1, x2, y1, y2;
  initgraph(&gd, &gm, "");
  setbkcolor(0);
  while (1)
  {
    printf("\n1.SOLID_LINE\n2.DOTTED_LINE\n3.CENTER_LINE\n");
    printf("\n4.DASHED_LINE\n5.USERBIT_LINE\n6.Exit");
    printf("\nEnter Your Choice:");
    scanf("%d", &c);
    clrscr();
    cleardevice();
    if (c < 6)
    {
      printf("\nEnter starting point (x1 ,y1):");//50 200
      scanf("%d %d", &x1, &y1);
      printf("\nEnter End point (x2,y2):");//300 200
      scanf("%d %d", &x2, &y2);
    }
    switch (c)
    {
    case 1:
      setlinestyle(SOLID_LINE, 1, 1);
      setcolor(15);
      line(x1, y1, x2, y2);
      getch();
      cleardevice();
      break;
    case 2:
      setlinestyle(DOTTED_LINE, 1, 1);
      setcolor(15);
      line(x1, y1, x2, y2);
      getch();
      cleardevice();
      break;
    case 3:
      setlinestyle(CENTER_LINE, 1, 1);
      setcolor(15);
      line(x1, y1, x2, y2);
      getch();
      cleardevice();
      break;
    case 4:
      setlinestyle(DASHED_LINE, 1, 1);
      setcolor(15);
      line(x1, y1, x2, y2);
      getch();
      cleardevice();
      break;
    case 5:
      setlinestyle(USERBIT_LINE, 1, 1);
      setcolor(15);
      line(x1, y1, x2, y2);
      getch();
      cleardevice();
      break;
    case 6:
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
