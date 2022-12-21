#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
#include<sstream>
#include<MMSystem.h>
#include<conio.h>

#include "front.h"
#include "load.h"
#include "close.h"

using namespace std;

int mainG();
int diagb();
int menu();

int insT()
{
    cleardevice();
    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\insT.jpg",0,0,640,500);
    I:
    int holdi;
    holdi=getch();
    if(holdi==27)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        closegraph();
        menu();
    }
    else
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        goto I;
    }
}

int abc()
{
    cleardevice();
    outtextxy(100,100,"DEVELOPERS:");
    outtextxy(100,150,"Gopal Karki");
    outtextxy(100,180,"Aabhusan Adhikary");
    outtextxy(100,210,"Diwakar Khatiwada");
    J:
    int holde;
    holde=getch();
    if(holde==27)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        closegraph();
        menu();
    }
    else
    {
        goto J;
    }
}

int menu()
{
    int a=0,b=1;
    int gdriver = DETECT,gmode,page=0;
    initgraph(&gdriver,&gmode,"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\graphics");

    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\menuG.jpg",0,0,640,500);

    outtextxy(80,100+b,"=>");
    A:
    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\menuG.jpg",0,0,640,500);
    outtextxy(80,100+a,"=>");
    int hold;
    hold=getch();
    if(hold==80)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        a=a+50;
        b=b+1;
    }
    else if(hold==72)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        a=a-50;
        b=b-1;
    }
    else if(hold==13)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        if(b==1)
        {
            PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
            mainG();
            getch();
        }
        else if(b==2)
        {
            PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
            abc();
            getch();
        }
        else if(b==3)
        {
            PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
            insT();
            getch();
        }
        else
        {
            PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
            diagb();
        }
    }
    else if(hold==27)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        diagb();
    }
    else
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        a=a;
    }
    if(b>4)
    {
        a=0;
        b=1;
    }
    if(b<1)
    {
        a=150;
        b=4;
    }
    goto A;
    getch();
}
int main1()
{
    int gdriver = DETECT,gmode,page=0;
    initgraph(&gdriver,&gmode,"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\graphics");
    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\menu.jpg",0,0,640,500);
    PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\menu.wav"), NULL, SND_ASYNC);

    setactivepage(page);
    cleardevice();
    menu();
    closegraph();
}
int mainG()
{
    char score[20];
    char pts[10];
    char a;
    int Tp=100;

    int gdriver = DETECT,gmode,i,j,k;
    initgraph(&gdriver,&gmode,"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\graphics");
    A:

    Tp=Tp-5;

    floodfill(10,30,RED);
    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\slotmachine.jpg",0,0,640,500);

    setcolor(2);

    printf("\t%d",Tp);
    sprintf(pts,"%d $",Tp);
    outtextxy(575,56,pts);


    settextstyle(6,HORIZ_DIR,5);

    int i0;
    int j0;
    int k0;

    int x,y,z;


    setcolor(4);

    PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\mainG.wav"), NULL, SND_ASYNC);

    for(int i=0;i<2;i++)
    {

        for(int i0=0;i0<=9;i0++)
            {
            if(i0<=9)
            {
                printf("\t%d",i0);
                sprintf(score,"%d",i0);
                outtextxy(215,210,score);
                for(int i1=0;i1<=99;i1++)
                {
                    printf("\n");
                    Sleep(1.0);
                }
            }
            else
            {
                return 0;
            }
        }
    }

    srand(time(0));
    C:
    x = rand()%10+1;
    if(x>9)
    {
        goto C;
    }
    a = x;
    sprintf(score,"%d",a);
    outtextxy(215,210,score);

    for(int j=0;j<2;j++)
    {
        for(int j0=0;j0<=9;j0++)
        {
            if(j0<=9)
            {
                printf("\t%d",j0);
                sprintf(score,"%d",j0);
                outtextxy(295,210,score);
                for(int j1=0;j1<=99;j1++)
                {
                    printf("\n");
                    Sleep(1.0);
                }
            }
            else
            {
                return 0;
            }
        }
    }
    D:
    y = rand()%10 +1;
    if(y>9)
    {
        goto D;
    }
    int b = y;
    sprintf(score,"%d",b);
    outtextxy(295,210,score);

    for(int k=0;k<2;k++)
    {
        for(int k0=0;k0<=9;k0++)
        {
            if(k0<=9)
            {
                printf("\t%d",k0);
                sprintf(score,"%d",k0);
                outtextxy(375,210,score);
                for(int k1=0;k1<=99;k1++)
                {
                    printf("\n");
                    Sleep(1.0);
                }
            }
            else
            {
                return 0;
            }
        }
    }
    E:
    z = rand()%10+1;
    if(z>9)
    {
        goto E;
    }
    int c = z;
    sprintf(score,"%d",c);
    outtextxy(375,210,score);
    Sleep(1000);
    setcolor(15);
    settextstyle(6,HORIZ_DIR,3);

    if(a==b==c || c==b==a || b==c==a)
    {
        outtextxy(200,370,"BINGO! (+ 20$)");
        Tp=Tp+20;
    }
    else if(a==b+1 && b==c+1 || b==c+1 && c==a+1 || c==a+1 && a==b+1)
    {
        if(a>9 && b>9 && c>9)
        {
            return 0;
        }
        else
        {
            outtextxy(200,360,"SEQUENCE (+ 10$)");
            Tp=Tp+10;

        }
    }
    else if(a==b || b==c || a==c )
    {
        outtextxy(190,360,"You Got Pair (+ 10$)");
        Tp=Tp+10;
    }

    else
    {
         outtextxy(120,360,"Better Luck Next Time (+ 0$)");
         Tp=Tp;
    }

    Sleep(800);
    settextstyle(6,HORIZ_DIR,2);
    outtextxy(125,420,"Do you want to continue ? Press y/n?");
    B:
    int hold;
    hold=getch();

    if(hold==121)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        if(Tp<0)
        {
            outtextxy(200,400,"Game over Press N!");
            goto B;
        }
        goto A;
    }
    else if(hold==110)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        closegraph();
        menu();
    }
    else{
            PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
            goto B;
    }
    closegraph();
}
int diagb()
{
    int gdriver = DETECT,gmode,i,j,k;
    initgraph(&gdriver,&gmode,"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\graphics");

    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\diagb.jpg",0,0,640,500);

    B:
    int hold;
    hold=getch();

    if(hold==121)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"), NULL, SND_ASYNC);
        closegraph();
        clse();
    }
    else if(hold==110)
    {
        PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"),NULL,SND_ASYNC);
        closegraph();
        menu();
    }
    else{
            PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\keypress.wav"),NULL,SND_ASYNC);
            goto B;
    }
    closegraph();
}

int main()
{
    front1();
    load();
    menu();
    clse();
}
