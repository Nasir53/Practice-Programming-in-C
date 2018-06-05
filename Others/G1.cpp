#include<graphics.h>
#include<conio.h>

int main()
{

    int driver=DETECT,mode;
    char *my_driver;
    initgraph(&driver,&mode,"C:\\TC\\BGI");
    my_driver=getdrivername();
    outtextxy(100,100,my_driver);
    //getch();
    closegraph();

}
