int clse()
{
    int gdriver = DETECT,gmode;
    initgraph(&gdriver,&gmode,"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\graphics");
    PlaySoundA(TEXT("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\sounds\\front.wav"), NULL, SND_ASYNC);

    readimagefile("C:\\Users\\Gopal\\Desktop\\Proj\\Files\\Images\\clse.jpg",0,0,640,500);
    delay(5000);
    exit(0);
}
