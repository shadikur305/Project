#include <graphics.h>
#include<iostream>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    //For S
    line(50,50,65,50);
    line(50,50,50,70);
    line(50,70,65,70);
    line(65,70,65,90);
    line(50,90,65,90);

    //For O
    line(80,50,80,90);
    line(95,50,95,90);
    line(80,50,95,50);
    line(80,90,95,90);

    //For J
    line(110,50,125,50);
    line(125,50,125,90);
    line(125,90,110,75);

    //For I
    line(140,50,140,90);
    line(135,50,145,50);
    line(135,90,145,90);

    //For B
    line(160,50,160,90);
    line(160,50,175,60);
    line(160,70,175,60);
    line(160,70,175,80);
    line(160,90,175,80);

    //For C
    line(50,120,50,150);
    line(50,120,65,120);
    line(50,150,65,150);

    //For S
    line(80,120,95,120);
    line(80,120,80,135);
    line(80,135,95,135);
    line(95,135,95,150);
    line(80,150,95,150);

    //For E
    line(110,120,110,150);
    line(110,120,125,120);
    line(110,135,125,135);
    line(110,150,125,150);

    //For 2
    line(140,120,155,120);
    line(155,120,155,135);
    line(155,135,140,135);
    line(140,135,140,150);
    line(140,150,155,150);

    //For 0
    line(170,120,170,150);
    line(170,120,185,120);
    line(185,120,185,150);
    line(170,150,185,150);

    //For 0
    line(200,120,200,150);
    line(200,120,215,120);
    line(215,120,215,150);
    line(200,150,215,150);


    //For 1
    line(230,120,230,150);

    //For 0
    line(245,120,245,150);
    line(245,120,260,120);
    line(260,120,260,150);
    line(245,150,260,150);

    //For 1
    line(275,120,275,150);

    //for 9
    line(290,120,290,135);
    line(290,120,305,120);
    line(305,120,305,150);
    line(290,135,305,135);

    //For 2
    line(320,120,335,120);
    line(335,120,335,135);
    line(335,135,320,135);
    line(320,135,320,150);
    line(320,150,335,150);

    //For 2
    line(350,120,370,120);
    line(370,120,370,135);
    line(350,135,370,135);
    line(350,135,350,150);
    line(350,150,370,150);

    //For 7
    line(385,120,405,120);
    line(395,150,405,120);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle (180,180,190,450);
    floodfill(181,181,WHITE);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle (190,190,360,290);
    floodfill(191,191,GREEN);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(270,240,30);
    floodfill(270,240,RED);

   /* for (int i=625;i>=-100; i--){
    outtextxy(i,400,"NATIONAL FLAG");
    delay(30);
}*/


     getch();
    closegraph();
    return 0;


    }


