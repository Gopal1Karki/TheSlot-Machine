int load()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
     PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\front"), NULL, SND_ASYNC);

    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\load.jpg",0,0,640,500);

    settextstyle(3,HORIZ_DIR,3);
    setcolor(BLACK);
    rectangle(199,179,449,201);

    for(int i=0;i<=250;i++)
    {
        setcolor(2);
        rectangle(200,180,200+i,200);
        delay(20);
    }

    delay(500);
    closegraph();

    return 0;
}
