
#include<graphics.h>
#include<conio.h>
int main()
{

    int gd=0,gm;
    initgraph(&gd,&gm,"");
    setcolor(14);
    circle(200,100,80);
    setcolor(13);
    rectangle(300,50,450,100);
    setcolor(12);
    line(250,200,500,350);
    setcolor(15);
    ellipse(250,240,0,360,150,150);
    getch();

    closegraph();
}
