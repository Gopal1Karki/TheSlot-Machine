int front1()
{
    int gdriver = DETECT,gmode,i,j,k;
    initgraph(&gdriver,&gmode,"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\graphics");
    PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\front.wav"), NULL, SND_ASYNC);

    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\front.jpg",0,0,640,500);
    delay(5000);

    closegraph();
}
