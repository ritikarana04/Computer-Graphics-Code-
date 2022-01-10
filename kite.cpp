#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()

{
int gd,gm;
detectgraph(&gd,&gm);

initgraph(&gd ,&gm, (char*)"");
line(200,200,300,100);
line(300,100,400,200);
line(400,200,300,300);
line(400,200,300,300);
arc(300,300,45,135,140);



line(300,300,250,350);
line(250,350,350,350);
line(300,300,350,350);


floodfill(300,310,WHITE);
getch();
closegraph();
}

