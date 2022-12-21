int diagb()
{
    int gdriver = DETECT,gmode,i,j,k;
    initgraph(&gdriver,&gmode,"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\graphics");
    PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\front.wav"), NULL, SND_ASYNC);

    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\diagb.jpg",0,0,640,500);

    B:
    int hold;
    hold=getch();

    if(hold==121)
    {
        clse();
    }
    else if(hold==110)
    {
        exit(0);
    }
    else{
            goto B;
    }
    closegraph();
    delay(5000);

    closegraph();
}
