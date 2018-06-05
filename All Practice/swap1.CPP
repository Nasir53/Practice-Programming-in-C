#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z;
printf("\n x=\ny=");
scanf("%d%d",&x,&y);
z=x;
x=y;
y=z;
printf("\nx is=%d",x);
printf("\ny is=%d",y);
getch();
return 0;

}
